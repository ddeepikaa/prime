# prime
# prime-number
#include<stdio.h>
int main()
{
  int num,num2,ctr,size,count=1;
  printf("enter the range ");
  scanf("%d",&num,&num2);
  size=num/2;
for(ctr=1;ctr<=size;ctr++)
{
   if(num%ctr==0)
     count++;
    else 
     continue;
if(count==1)
  printf("%d",ctr);
}
