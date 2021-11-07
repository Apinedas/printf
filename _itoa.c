#include "main.h"

/**
 * _itoa - Converts an intiger to specified argument
 * @num: intiger to convert
 * @s: Pointer to save int into
 * @base: Base to convert int
 * Return: Pointer to s
 */

char *_itoa(int num, char *s, unsigned int base)
{
	int i = 0;
	int res;
	int sign = 0;

	if (num == 0)
		s[i + 1] = '0';
	if (num < 0 && base == 10)
	{
		sign = 1;
		num = num * (-1);
	}
	while (num > 0)
	{
		res = num % base;
		if (res > 9)
			s[i] = res + 'a';
		else
			s[i] = res + '0';
		num = num / base;
	}
	if (sign == 1)
		s[i] = '-';
	s[i] = '\0';
	rev_string(s);
	return (s);
}
