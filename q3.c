//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    c=a+b;
    b=c-b;
    a=c-a;
    printf("after swapping %d %d",a,b);
    return 0;
    
}