#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
//153
bool is_armstrong_number(int candidate)
{
    if (candidate < 10)
        return true;

    int digit_count = log10(candidate) + 1;

    int num = candidate;
    int armstrong = 0;
    while (num > 0)
    {
        int last_digit = num % 10;//получаем последнюю цифру в числе
        int power_last_digit = 1;//размер числа на 1
        for (int i = 0; i < digit_count; i++){
            power_last_digit =power_last_digit * last_digit;}
        armstrong = armstrong + power_last_digit;
        num =num / 10;
    }
    return candidate == armstrong;
}
int main(){
    int o;
    scanf("%d", &o);
    bool x=is_armstrong_number(o);
    printf("%d", x);
}

