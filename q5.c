//Write a program to input a three-digit number and display the sum of the digits#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,rem=0,sum=0;
    printf("enter a three digit num : ");
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;
        sum+=rem;
        a=a/10;


    }
    printf("%d",sum);
    return 0;

}
