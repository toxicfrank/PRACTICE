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

	printf("Enter the number: ");
	scanf("%d", &N);

	/*Part 2*/
	int rem;

	while (N > 0)
	{
		rem = N % 10;
		if (seen[rem] == 1)
		break;
		seen[rem] = 1;
		N = N / 10;
	}
	if (N > 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return (0);
}
