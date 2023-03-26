#include <stdio.h>
/**
 * main - this is a programme that will display the salary of an
 * employer when inserted
 *
 * Return: always 0
 */
int main(void)
{
	double salary;

	printf("Enter your salary: \n");

	scanf("%lf", &salary);

	double *ptr = &salary;

	printf("Your salary is: %.2lf\n", *ptr);

	double new_salary = *ptr * 2;

	printf("Your double salary is: %.2lf\n", new_salary);

	return (0);


}
