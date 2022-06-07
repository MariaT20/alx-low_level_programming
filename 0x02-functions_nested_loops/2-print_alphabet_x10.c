#include "main.h"

/**
 * print_alphabet - Print the the alphabet 10 times
 *
 * Description: Prints the alphabet 10 times
 *
 * Return: 0
 */
int main(void)
{
	char n;
	int i = 1;

	while (i <= 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
