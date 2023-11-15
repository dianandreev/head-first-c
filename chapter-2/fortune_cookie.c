/*
* Learn about the arrays and pointers:
* When we declare an array - char something[] , the something is array variable;
* When we are passing the array to a function, it is auto converted to a pointer.
* The sizeof will return different value for array variable and pointer to an array.
* The pointer of the array is equal to the adress of the first element of the array.
* You can manipulate pointer adress with simple arithmethic operations like the while 
* which is calculating the length of the msg pointer, because we cant use sizeof there.
*/

#include <stdio.h>

void fortune_cookie(char msg[]) { 
	//msg is actually pointer to the first element in the char array
	printf("Message reads: %s\n", msg);
	//size of msg is the size of the pointer in the current CPU architecture
	printf("msg occupies %li bytes\n", sizeof(msg));
	//size of *smg is the size of the type of the msg, which is char 
	printf("msg occupies %li bytes\n", sizeof(*msg));
	//Count the chars unitl \0
	int msg_size = 0;
	//Take the pointer to the first char in the array
	char *msg_pointer = msg;
	//we waint until we reach the end of the char array which is marked with \0 at the end
	while(*msg_pointer != '\0') {
		//we increase the msg_size with 1 to count
		msg_size += 1;
		//now we move the pointer with 1
		//1 may be 4 bytes or 8 bytes, depends on the pointer type.
		msg_pointer++;
	}

	printf("msg lenght is %i", msg_size);
}

int main() {
	char food[5];
	char test[] ="asassdasdasdasdasdasdasda";

	printf("Food size is: %li\n", sizeof(food));
	printf("Food size is: %li\n", sizeof(test));
	char message[] = "Cookies make you fat";

	printf("Food size is: %li\n", sizeof(message));
	fortune_cookie(message);

    	return 0;
}
