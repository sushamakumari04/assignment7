#include<stdio.h>
int main()
{
int previous=0 ,current=1,nextTerm=0;
int n;
printf("enter the number of terms you want to print");
scanf("%d",&n);

for(int i=1;i<n;i++)
{
   nextTerm=current+previous;
   // printf(" %d ",current);
   previous=current;
   current=nextTerm;


}
  printf(" %d ",current);





return 0;
}
