#include"main.h"
/**
 * islower - checks for lowercase character
 *  @c: the character to check
 *  Return: 1 if c is lowercase, 0 otherwise
 *
 *  Description: checks for lowercase character.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
