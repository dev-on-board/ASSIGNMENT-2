//Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
    int a;
    printf("enter a num : ");
    scanf("%d",&a);
    printf("%d",a/10);
    return 0;
}