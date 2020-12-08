/* printing the LCM of two number */

#include <stdio.h>
int main()
{
int n1, n2, lcm;
printf("Enter 2 numbers: \n");
scanf("%d %d", &n1, &n2);
lcm=(n1 > n2)? n1 : n2;
while(1)
{
if(lcm % n1 == 0 && lcm % n2 == 0)
{printf("LCM of %d and %d = %d", n1, n2, lcm);
break;
}
++lcm;
}
return 0;
}
