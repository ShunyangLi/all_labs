#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num;
	scanf ("%d", &num);

	if(num == 17) {
        printf("That's my favourite number!\n");
    }else {
        printf("Oh no, that's not my favourite number.\n");
    }
    
    return EXIT_SUCCESS;
}