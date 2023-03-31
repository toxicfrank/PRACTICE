#include <stdio.h>

/**
 * main - checks for repetition
 *
 * Returns: Always 0
 */

int main(void)
{
	/*Part 1*/
	int seen[10] = {0};
	int N;

	printf("Enter a number so that it can be checked whether the digit is repeated: ");
	scanf("%d", &N);

	/*part 2*/
	int rem;

	while (N > 0)
	{
		rem = N % 10;

		if (seen[rem] == 1)
		{
			break;
		}
		else
		{
			seen[rem] = 1;
			N = N / 10;
		}
	}
	if (N > 0)
	{
		printf("yes there is repetition of digits");
	}
	else
	{
		printf("There is no repetition of digits");
	}
	return (0);
}
