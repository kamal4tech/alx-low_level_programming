#include<unistd.h>

/**
 * main - unistd header declaration
 * stored the message in array called "message"
 * its length using sizeof
 * write fonction 
 * return 0
 */


int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(message) - 1;

	write(2, message,len);

	return 1;

}
