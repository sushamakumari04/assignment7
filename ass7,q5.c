#include<stdio.h>
int main()
{
 int n,m,min,flag=0;
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
 for(int i=min;i>1;i--)
 {
  if(m%i==0&&n%i==0)
  {
   printf("not a co-prime number");
    flag++;
    break;
  }
 }
 if(flag==0)
 {
    printf("co-prime number");
 }
 return 0;
}

