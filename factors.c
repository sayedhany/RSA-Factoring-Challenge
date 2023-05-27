#include "factor.h"
/**
 * main - print factors
 * @argc: number
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long long number;

	if (argc != 2)
	{
		printf("Usage: %s <file>\n", argv[0]);
		return (1);
	}

	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		printf("Error, Can't open file %s\n", argv[1]);
		return (1);
	}
	while (fscanf(file, "%llu", &number) != EOF)
	{
		factorize(number);
	}
	fclose(file);
	return (0);
}
