#include <stdlib.h>
#include <time.h>
/* more headers goes there 
 * main - This is the way to check if it assigns random numbers to int
 * it runs and executes it
 * Return: the value is 0 for code success*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>5);
{
	printf("Last digit of n is %d : and is greater than 5");
}
	if (n==0);
{
	printf("Last digit of n is %d : and is 0");
}
	if (n<6!0);
{
	printf("Last digit of n is %d : and is less than 6 and not 0");
	return (0);
}
}
