#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct cases - Struct for print cases
 * @pfcase: character for case
 * @convfun: Conversion function
 */

typedef struct cases
{
	char *pfcase;
	int (*convfun)(va_list n, char *buff, int print_len);
} print_cases;

char *_itoa(int num, char *s, unsigned int base);
char *_utoa(unsigned int num, char *s, unsigned int base);
char *_utoah(unsigned int num, char *s, unsigned int base);
int _printf(char *format, ...);
int replace(char *buffer, char *s, int print_len);
int (*get_print_cases(char *arg))(va_list, char *, int);
int c_case(va_list, char *, int);
int s_case(va_list, char *, int);
int perc_case(va_list, char *, int);
int dec_case(va_list, char *, int);
int bin_case(va_list, char *, int);
int uns_case(va_list, char *, int);
int oct_case(va_list, char *, int);
int lhex_case(va_list, char *, int);
int uhex_case(va_list, char *, int);
int r_case(va_list ap, char *buff, int print_len);
int S_case(va_list ap, char *buff, int print_len);
int R_case(va_list ap, char *buff, int print_len);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void rev_string(char *s);
char *rot13(char *s);

#endif
