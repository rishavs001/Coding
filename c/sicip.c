#include<stdio.h>
#include<math.h>

int main()
{
    float p,r,t,si,ci,cia;
    printf("Enter principle, rate and time \n");
    scanf("%f", &p);
    scanf("%f", &r);
    scanf("%f", &t);

    si=(p*r*t)/100;
    ci=p*(pow((1+(r/100)),t))-p;

    printf("Simple Interest is %f",si);
    printf("\nCompound Interest is %f",ci);

    return 0;
}