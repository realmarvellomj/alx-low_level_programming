#include "main.h"


/**
* clear_bit - value of given bits starts from 0
* @n: pointer to the number to change
* @index: index of the bit to clear
* Return: 1 if it works, -1 if it fails
*/

int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
