#include "main.h"
/**
 * isalpha - checks for alphabet character
 * @c: is the character to be checked
 * Return: 1 if c is a letter,uppercase or lowercase, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
