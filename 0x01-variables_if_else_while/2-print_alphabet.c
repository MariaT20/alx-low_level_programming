#include <stdio.h>
#include <ctype.h>
/**
 * main - all codes
 *
 * Description:A program that prints alphabets in lowercase followed by a line
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
