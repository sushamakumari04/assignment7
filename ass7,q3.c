#include<stdio.h>
int main()
{
int previous=0 ,current=1,nextTerm=0;
int n;
printf("enter the number of terms you want to print");
scanf("%d",&n);

for(int i=1;1;i++)
{
   nextTerm=current+previous;
  //  printf(" %d ",current);
   previous=current;
   current=nextTerm;
   if(nextTerm==n)
    {
        printf("number found");
        break;
    }

   if(nextTerm>n){
    printf("not found");
    break;
   }

}

  return 0;

}
