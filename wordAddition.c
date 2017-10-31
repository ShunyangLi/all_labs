#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 11
#define MAX_CHAR 10
 
void numberWord(int x, char char_number[MAX_NUM][MAX_CHAR]);

int main(int argc, char *argv[]) {
	
	char char_number[MAX_NUM][MAX_CHAR] = 
	{
		"zero","one","two","three","four","five","six","seven","eight","nine","ten"
	};
	
	int x,y,z;
	
	printf("Please enter two integers: ");
	scanf("%d",&x);
	scanf("%d",&y);
	z = x + y;
	
	numberWord(x,char_number);
	printf(" + ");
	
	numberWord(y,char_number);
	printf(" = ");
	
	numberWord(z,char_number);
	printf("\n");
}

void numberWord(int x, char char_number[MAX_NUM][MAX_CHAR]) {
	
	if(x < 0) {
		if(x >= -10) {
		
			printf("negative ");
			printf("%s",char_number[abs(x)]);
			
		} else {
		
			printf("%d",x);	
		}
		
	} else {
		
		if(x <= 10) {
		
			printf("%s",char_number[x]);
			
		} else {
		
			printf("%d", x);
		}
	}
	
}