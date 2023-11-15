#include <stdio.h>

int main() {

	char name[40];
	printf("Enter name: ");
	scanf("%39s", name);

	int age;
	printf("Enter age: ");
	scanf("%i", &age);

	char first_name[20];
	char last_name[20];
	printf("Enter first and last name");
	scanf("%19 %19", first_name, last_name);

	char food[5];
	printf("Enter favorite food: ");
	fgets(food, sizeof(food), stdin);
		/*
		* scanf - can overflow buffer, can input more than 1 variable at the same time;
		* fgets - overflow safe, can read only 1 input
		*/
	return 0;
}
