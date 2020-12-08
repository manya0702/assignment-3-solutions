/* To find if a given number is a strong number or not */

#include<stdio.h>
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

{ int n,sum,temp,rem;
printf("Enter the number :");
scanf("%d",&n);
temp=n;
sum=0;
while(temp!=0)
{
    rem=temp%10;
    sum=sum+fact(rem);
    temp=temp/10;
}

if(n==sum)
{printf("The number is a strong number");}
else
{printf("The number is not a strong number");}

return 0;
}
