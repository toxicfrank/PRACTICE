#include <stdio.h>
/**
 * main - this is a programme that will display the age of an
 * employer when inserted and multiply it by 2
 *
 * Return: always 0
 */
int main(void)
{
	int age;

	printf("What is ur age: \n");

	scanf("%d", &age);

	int *ptr = &age;

	printf("Your age is: %d\n", *ptr);

	printf("Address: %p\n", ptr);

	int new_age = *ptr * 2;

	printf("New age is: %d\n", new_age);

	return (0);

}
