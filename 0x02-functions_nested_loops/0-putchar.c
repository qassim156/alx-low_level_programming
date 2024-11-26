#include <stdio.h>
#include "main.h"


int main(){
	char myString[8] = "_putchar";
	int i;

	for(i = 0; i < 8; i++){
		_putchar(myString[i]);

	}
	_putchar('\n');
	return 0;
}
