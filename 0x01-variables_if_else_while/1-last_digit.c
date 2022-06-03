#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/*more header goes here*/
/**
 * main - Entry pointmain - Entry point
 * Return: 0
 */
int main(void){
	int n, lNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lNum = n % 10;
	if (lNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lNum);
	else if (lNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lNum);
	return (0);
}
