//Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a three digit num : ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    b=(b*100)+a;
    printf("%d",b);
    return 0;

}