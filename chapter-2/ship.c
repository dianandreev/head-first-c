/*
* The lesson here:
* Variables can be send via value or pointer.
* If we want to modify the params in another function, we have to pass them as pointers.
* In orther to get the pointer of a variable, we must use & before variable.
* If we want to store a pointer, we need a pointer variable which is declared like this - type *var_name;
* If we want to read of write to the actual value of the pointer, we must use * infront of the pointer variable.
*/

#include <stdio.h>

void go_south_east(int *latitude, int *longitude) {
	*latitude += 1;
	*longitude += 1;
}

int main() {
	int latitude = 32;
	int longitude = -64;

	go_south_east(&latitude, &longitude);
	printf("Avast! Not at: [%i, %i]\n", latitude, longitude);

	return 0;
}
