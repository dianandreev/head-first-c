/*
* Example of pointer decay.
* The pinter decay happens auto when the array is passed to a function.
*/

#include <stdio.h>

int main() {
	char s[] = "Casual message";
	char *t = s;
	
	printf("The size of the s char is %li \n", sizeof(s));
	printf("The size of the t pointer is %li \n", sizeof(t));


	return 0;
}
