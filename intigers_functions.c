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
		i++;
	}
	if (sign == 1)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	rev_string(s);
	return (s);
}

/**
 * _utoa - Converts an unsigned intiger to specified argument
 * @num: intiger to convert
 * @s: Pointer to save int into
 * @base: Base to convert int
 * Return: Pointer to s
 */

char *_utoa(unsigned int num, char *s, unsigned int base)
{
	int i = 0;
	int res;

	if (num == 0)
		s[i + 1] = '0';
	while (num > 0)
	{
		res = num % base;
		if (res > 9)
			s[i] = res + 'a';
		else
			s[i] = res + '0';
		num = num / base;
		i++;
	}
	s[i] = '\0';
	rev_string(s);
	return (s);
}

/**
 * _utoah - Converts an unsigned intiger to specified argument
 * @num: intiger to convert
 * @s: Pointer to save int into
 * @base: Base to convert int
 * Return: Pointer to s
 */

char *_utoah(unsigned int num, char *s, unsigned int base)
{
	int i = 0;
	int res;

	if (num == 0)
		s[i + 1] = '0';
	while (num > 0)
	{
		res = num % base;
		if (res > 9)
			s[i] = res + 'A';
		else
			s[i] = res + '0';
		num = num / base;
		i++;
	}
	s[i] = '\0';
	rev_string(s);
	return (s);
}
