#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int x;

    printf("Enter a year after 1852: ");
    scanf("%d", &x);

    if (x < 1852)
    {
        printf("%d is before 1852.\n", x);    
    } else if (x % 400 == 0) {
        printf("%d is a leap year.\n", x);
    } else if(x%4==0 && x%100!=0) {
        printf("%d is a leap year.\n", x);
    } else {
        printf("%d is not a leap year.\n", x);
    }

    return EXIT_SUCCESS;
}