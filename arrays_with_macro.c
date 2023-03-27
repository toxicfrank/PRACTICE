#include <stdio.h>
#define N 10
/**
 * main - main function
 *
 *
 * Return: always 0
 */

int main(void)
{
	int a[N], i;

	for (i = 0; i < N; i++)
	{
		printf("Eneter your index %d\n", i);
		scanf("%d", &a[i]);
	}
	printf("Array elements are as follows;\n");

	for (i = 0; i < N; i++)
	{
		printf("%d", a[i]);
	}

	return (0);
}
