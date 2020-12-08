/* finding the power of a number using for loop */

#include<stdio.h>
#include<math.h>
int main()
{int n,power,p,i;
printf("Enter a number:");
scanf("%d",&n);
printf("Enter the power of the number:");
scanf("%d",&p);

for(i=1;i<=p;i++)
    { power=pow(n,i);}

printf("The %d power of %d is:%d",p,n,power);
return 0;
}
