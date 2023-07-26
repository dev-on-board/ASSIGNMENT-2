#include<stdio.h>
int main()
{
    char s;
    printf("\nenter a character : ");
    scanf("%c",&s);
    printf("size of character : %d",sizeof(s));
    int a;
    printf("\nenter a num : ");
    scanf("%d",&a);
    printf("size of int : %d",sizeof(a));
    float b;
    printf("\nenter a value : ");
    scanf("%f",&b);
    printf("size of float : %d",sizeof(b));
    
    double d;
    printf("\nenter a value : ");
    scanf("%lf",&d);
    printf("size of double : %d",sizeof(d));



    return 0;
}