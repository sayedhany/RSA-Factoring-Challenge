#include "factor.h"
/**
 * factorize - printf
 * @number: number
 */
void factorize(long int number)
{
	long int i;

	printf("%ld=", number);
	for (i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			printf("%ld*%ld\n", number / i, i);
			return;
		}
	}
	printf("%ld*%d\n", number, 1);
}
