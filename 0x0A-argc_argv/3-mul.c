#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, length, j, digit;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	j = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && j == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, number1, number2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}
