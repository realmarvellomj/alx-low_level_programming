#include "main.h"


/**
* print_binary - outputs the binary similar to a decimal number
* @n: number to print in binary
*/

void print_binary(unsigned long int n)

{

	int j, count = 0;

	unsigned long int c;

	for (j = 63; j >= 0; j--)
	{
		c = n >> j;

		if (c & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
