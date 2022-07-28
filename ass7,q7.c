#include<stdio.h>
int main(){
int i,j,a,b,flag=0;
printf("enter the number between you want to print prime number");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
    flag=0;
 for(j=2;j<=i/2;j++)
 {
  if(i%j==0)
  {//i%j=0 else,i%j=1 if
    flag=1;
    break;
  }
}
 if(flag==0)
  printf("%d  ",i);
}

return 0;
}

