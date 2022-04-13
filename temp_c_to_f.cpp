#include<stdio.h>

int main()
{
    float c,f=0;
    printf("Temp in celsius ");
    scanf("%f",&c);
    f=(9.0/5.0)*c-32.0;
    printf("Temp in fehrenheit is %f",f);
    return 0;
}