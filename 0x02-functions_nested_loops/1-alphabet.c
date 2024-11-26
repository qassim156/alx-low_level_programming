#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the all alphabet in lowercase follwed by a new line.
 * Return: 0.
 */
int print_alphabet(){

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(alphabet[i]);
	_putchar('\n');

	return (0);
}


