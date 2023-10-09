#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int c;
    scanf("%d", &a);
    double i=log10(a);
    i=i+1;
    int p=i;
    while(i>0){
    a=pow(a, p);
    --i;
    }
    int num=a % 10;
    printf("%lf %d %d\n", i, a, num);
}