#include <stdio.h>
/**
 * main - intializing a 3D array
 * Return: always 0
 */
int main(void)
{
	int a[2][2][3] = {
		{{1, 2, 3}, {4, 5, 6,}},
		{{7, 8, 9,}, {10, 11, 12}}
	};
	int i;
	int j;
	int k;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf("%d", a[i][j][k]);
			}
		}
	}


	return (0);
}
