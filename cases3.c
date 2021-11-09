#include "main.h"

/**
 * r_case - function for r case
 * @ap: String
 * @buff: buffer
 * @print_len: actual position of buff
 * Return: Last position on buff
 */

int r_case(va_list ap, char *buff, int print_len)
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
	rev_string(s);
	print_len = replace(buff, s, print_len);
	free(s);
	return (print_len);
}

/**
 * R_case - function for R case
 * @ap: String
 * @buff: buffer
 * @print_len: actual position of buff
 * Return: Last position on buff
 */

int R_case(va_list ap, char *buff, int print_len)
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
	s = rot13(s);
	print_len = replace(buff, s, print_len);
	free(s);
	return (print_len);
}
