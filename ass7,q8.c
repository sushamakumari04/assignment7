#include<stdio.h>
int main(){
int i,j,a,flag=0;
printf("enter the number  to print nextPrime number");
scanf("%d",&a);
for(i=a;1;i++)
{
  flag=0;
  for(j=2;j<=i/2;j++)
 {
  if(i%j==0)
  {
    flag=1;
  }
}
 if(flag==0){
  printf("%d  ",i);
  break;}
}

return 0;
}

