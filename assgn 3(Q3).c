/* printing the HCF of two numbers */

#include<stdio.h>
int main()
{int n1,n2,i,min,hcf;
printf("Enter number 1:");
scanf("%d",&n1);
printf("Enter number 2:");
scanf("%d",&n2);
hcf=1;
min=(n1<n2) ? n1:n2;
for(i=1;i<=min;i++)
     {  if(n1%i==0 && n2%i==0)
        hcf=i;
     }
printf("The hcf of %d and %d is:%d",n1,n2,hcf);
return 0;
}
