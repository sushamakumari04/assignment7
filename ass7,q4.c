#include<stdio.h>
int main()
{
 int n,m,min;
 printf("enter first number : ");
 scanf("%d",&n);
 printf("enter the second number :");
 scanf("%d",&m);
 if(n>m)
 { min=m;
 }
 else{
  min=n;
 }
 for(int i=min;i>0;i--)
 {
  if(m%i==0&&n%i==0)
  {
   printf(" the Hcf  is %d",i);
    break;
  }
 }
 return 0;
}

