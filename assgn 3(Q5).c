/* finding the prime factors of a number */

#include<stdio.h>
int main()
{
int n,i,prime,j;
printf("Enter a number:");
scanf("%d",&n);
printf("The prime factors of %d are: \n",n);
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
      prime=1;
      for(j=2;j<=i/2;j++)
      { if(i%j==0)
        { prime=0;
          break;}
      }

    if(prime==1)
     printf("%d \n",i);

    }
}
return 0;
}
