#include "factor.h"
/**
 * factorize - printf
 * @number: number
 */
void factorize(unsigned long long  number)
{
	unsigned long long i;

	printf("%llu=", number);
	for (i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			printf("%llu*%llu\n", number / i, i);
			return;
		}
	}
	printf("%llu*%d\n", number, 1);
}
