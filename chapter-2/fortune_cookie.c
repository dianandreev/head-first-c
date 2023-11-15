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
	char message[] = "Cookies make you fat";
	fortune_cookie(message);

    	return 0;
}
