/* printing all strong numbers between 1 on n */

#include <stdio.h>
int fact(int num)
{
int fact=1;
int i;
for(i=num;i>0;i--)
{
    if(num=0)
     return 1;
    else
     fact=fact*i;
}
return fact;
}
int main()

{ int n,sum,temp,rem,j;
printf("Enter the term till where the strong number series is to printed:");
scanf("%d",&n);
printf("The strong numbers between 1 and % d are : \n",n);
for(j=1;j<=n;j++)
{
temp=j;
sum=0;
while(temp!=0)
{
    rem=temp%10;
    sum=sum+fact(rem);
    temp=temp/10;
    if(j==sum)
    {printf("%d \n",sum);}
}
}
return 0;
}
