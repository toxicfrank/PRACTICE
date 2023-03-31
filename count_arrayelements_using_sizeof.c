#include <stdio.h>
/**
 * main - this is a programme to count the number of array elements
 *
 * Return: always 0
 */
int main(void)
{
	int a[] = {21, 32, 23, 234, 325, 25, 25, 256, 2652, 54, 24, 64, 75, 757, 8898, 975, 595, 56, 558, 8586 ,554, 44, 484, 4, 12, 12};

	printf("%d", sizeof(a) / sizeof(a[0]));

	return (0);
}
