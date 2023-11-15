/*
* Skip chars from array. Manipulate pointers.
*/

#include <stdio.h>

int main() {

	char wow[] = "Some text";
	char *wow_pointer = wow;
	
	printf("%s", wow_pointer + 5);

	return 0;
}
