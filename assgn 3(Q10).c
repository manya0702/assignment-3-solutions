#include<stdio.h>
int main()
{
int phy,chem,maths,bio,computer;
float percentage;
printf("Enter the marks of phy,chem,maths,bio and computers: \n");
scanf("%d %d %d %d %d",&phy,&chem,&maths,&bio,&computer);
percentage=(phy+chem+maths+computer+bio)/5.0;
printf("The percentage of marks obtained is: %f \n",percentage);
if(percentage>=90)
    printf("Grade- A");
else if (percentage>=80)
    printf("Grade- B");
else if (percentage>=70)
    printf("Grade- C");
else if (percentage>=60)
    printf("Grade- D");
else if (percentage>=40)
    printf("Grade- E");
else
    printf("Grade -Fail");

return 0;
}
