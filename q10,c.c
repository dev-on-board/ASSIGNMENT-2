//Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int a,result=1;
    printf("enter a num : ");
    scanf("%d",&a);
    a=a/10;
    result=a*10;
    printf("%d",result);



    return 0;
}

