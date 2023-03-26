#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int age = 25;

	printf("%p\n", &age);

	int *ptr;

	printf("%p\n", ptr);

	printf("Hello world\n");

	return (0);
}