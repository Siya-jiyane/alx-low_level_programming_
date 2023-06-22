#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Printing numbers that followed by a new line.
 *
 * @separator: Is The string to be printed between numbers.
 * @num: Is the number of integers passed to the function.
 * @...: It’s a variable that number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int num, ...)
{
	va_list numbers;

	unsigned int index;

	va_start(numbers, num);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));

		if (index != (num - 1) && separator != NULL)

			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
