#include<stdio.h>

/**
 * main - this a c programmm
 * the rule is the size of every integer
 * return 0
 */

int main (){

	printf ("the Size of a char: %lu Byte(s) \n",sizeof (char));
	printf ("the Size of an int: %lu Byte(s) \n",sizeof (int));
	printf ("the Size of a long int: %ld Byte(s) \n",sizeof (long int));
	printf ("the Size of a long long int: %lu Byte(s)\n",sizeof (long long int));
	printf ("the Size of a float: %lu Byte(s) \n",sizeof (float));
	return 0;
}
