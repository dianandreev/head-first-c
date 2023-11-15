/*
* Lesson here:
* Pointers of array are equal to the first adress of the array.
* int *choice is equal to contestants[0]
* choice is equal to the adress of the contestants[0]
* &choice is equal to the adress of the choice pointer variable.
*/



#include <stdio.h>

int main() {
	int contestants[] = {1, 2, 3};
	int *choice = contestants;
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("The lucky guy is %i\n", contestants[2]);
	//contestants[2] = *choise = contestants[0] = 2
	
	return 0;
}
