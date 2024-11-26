#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10- Check description
 * Description: It prints the all alphabet in lowercase ten times,
 * follwed by a new line.
 * Return: 0.
 */
void print_alphabet_x10(void)
{

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int w;

	for (w = 0; w < 10; w++)
	{

		for (i = 0; i < 26; i++)
			_putchar(alphabet[i]);
		_putchar('\n');
	}
}




