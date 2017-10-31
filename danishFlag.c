#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int num;

    printf("Enter the flag size: ");
    scanf("%d", &num);

    for (int i = 0; i < (2 * num - 1); i++)
    {
        for (int j = 0; j < (3 * num - 1); j++)
        {
            printf ("#");
        }
        printf (" ");

        for (int k = 0; k < (6 * num - 1); k ++)
        {
            printf ("#");
        }
        printf ("\n");
    }

    
}