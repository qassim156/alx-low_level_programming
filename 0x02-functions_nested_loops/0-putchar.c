#include <stdio.h>
#include "main.h"
/**@main
 *myString is an array that stores the text to be printed to the screen
 *_putchar is the function imporyed to print text
 *
 * */

int main(){
	char myString[8] = "_putchar";
	int i;
	
	for(i = 0; i < 8; i++){
		_putchar(myString[i]);
	}
	
	_putchar('\n');
	return 0;
}
