//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD
#include<stdio.h>
int main()
{
    float a,USD;
    printf("enter a INR : ");
    scanf("%f",&a);
    printf("%.2f \n ",a);
    USD=a/76.23;
    printf("%.2f ",USD);
    return 0;



}