#include"main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c[] = "main";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
