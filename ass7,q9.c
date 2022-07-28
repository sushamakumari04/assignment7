#include<stdio.h>
#include<math.h>
int main()
{
int n,rem,flag=0,sum;
printf("enter the number");
scanf("%d",&n);
int temp=n;
int t=temp;
while(n!=0)
{
  n=n/10;
  flag++;
}
printf("number has %d digit\n",flag);
n=temp;

 while(n!=0)
{
 rem=n%10;
 sum=sum+pow(rem,flag);
 n=n/10;

}
if(sum == temp){
 printf( "Armstrong number %d",sum);}
 else{
    printf("not a armstrong number");
 }

return 0;
}



