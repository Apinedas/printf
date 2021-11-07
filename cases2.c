#include "main.h"

/**
 * uns_case - function for unsigned case
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int uns_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	aux = _utoa(num, aux, 10);
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
 * oct_case - function for octal case
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int oct_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	aux = _utoa(num, aux, 8);
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
 * lhex_case - function for lowercase hex case
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int lhex_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	aux = _utoa(num, aux, 16);
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
 * uhex_case - function for lowercase hex case
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int uhex_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	aux = _utoah(num, aux, 16);
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
