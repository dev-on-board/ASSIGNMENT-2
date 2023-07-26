//Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
    int a;
    printf("enter a num : ");
    scanf("%d",&a);
    int b;
    printf("enter a digit : ");
    scanf("%d",&b);
    int result=(a*10)+b;
    printf("%d",result);

 return 0;
}