#include<stdio.h>
int main()
{
    int a,result=0;
    printf("enter a num : ");
    scanf("%d",&a);
    while(a!=0)
    {
      result=a&1;
      if(result==0)
      {
        printf("even");

      }
      else {
        printf("odd");
      }
      break;
    }
    return 0;
}