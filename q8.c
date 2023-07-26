#include<stdio.h>
int main()
{
 int a,count=0,result=0;
 printf("enter a num : ");
 scanf("%d",&a);
 while(a!=0)
 {
    result=a&1;
    count++;
    if(result==1)
    {
        printf("%d",count);
        break;
    }
    a=a>>1;

 }


 

 return 0;
 }
 

  

  
   
  
