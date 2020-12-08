/* program to convert a Hexadecimal number to a Decimal number */

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hex[20];
    long long decimal, place;
    int i, val,length;

    decimal = 0;
    place = 1;
    i=0;

    printf("Enter any hexadecimal number: ");
    gets(hex);

    length = strlen(hex);
    length--;

    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, length);
        length--;
    }

    printf(" The Hexadecimal number is = %s\n", hex);
    printf("The Decimal conversion of the number is = %lld", decimal);

    return 0;
}
