#include <stdio.h>
/**
 * main - this programme is for adding the numbers in the array
 *
 * Return: always 0
 */
int main(void)
{
	int a[5][5] = {{8, 3, 9, 0, 10},
	{3, 5, 17, 1, 1}, {2, 8, 6, 23, 1},
	{15, 7, 3, 2, 9}, {6, 14, 2, 6, 0}};
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d", a[i][j]);
		}
	}
	printf("\n");
	/*Row sum*/

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum += a[i][j];
		}
		printf("%d", sum);
	}
	printf("\n");

	/*Column sum*/

	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			sum += a[i][j];
		}
		printf("%d", sum);
	}
	printf("\n");

	return (0);
}
