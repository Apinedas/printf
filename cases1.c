#include "main.h"

/**
 * c_case - function for c case
 * @ap: Character
 * @buff: buffer
 * @print_len: Actual position of buff
 * Return: Last position on buff
 */

int c_case(va_list ap, char *buff, int print_len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	if (c == NULL)
		return (print_len);
	c[0] = va_arg(ap, int);
	if (c[0] == 0)
		print_len += 1;
	c[1] = '\0';
	print_len = replace(buff, c, print_len);
	free(c);
	return (print_len);
}

/**
 * s_case - function for s case
 * @ap: String
 * @buff: buffer
 * @print_len: actual position of buff
 * Return: Last position on buff
 */

int s_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len;

	aux = va_arg(ap, char*);
	if (aux == NULL)
		aux = "(null)";
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	free(s);
	return (print_len);
}

/**
 * dec_case - function for d case
 * @ap: Decimal
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int dec_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _itoa(num, aux, 10);
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	free(s);
	free(aux);
	return (print_len);
}

/**
 * perc_case - function for % case
 * @ap: Unused
 * @buff: buffer
 * @print_len: Actual position of buff
 * Return: Last position on buff
 */

int perc_case(va_list __attribute__((unused)) ap, char *buff, int print_len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	if (c == NULL)
		return (1);
	c[0] = '%';
	c[1] = '\0';
	print_len = replace(buff, c, print_len);
	free(c);
	return (print_len);
}

/**
 * bin_case - function for binary case
 * @ap: intiger to convert into binary
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int bin_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _itoa(num, aux, 2);
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	free(s);
	free(aux);
	return (print_len);
}
