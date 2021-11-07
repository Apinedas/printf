#include "main.h"

/**
 * get_print_cases - Gets the function to convert arg to string
 * @arg: Argument passed
 * Return: Pointer to right convertion function
 */

int (*get_print_cases(char *arg))(va_list, char *, int)
{
	int i = 0;
	print_cases formats[] = {
		{"c", c_case},
		{"s", s_case},
		/*{"%", perc_case},*/
		{"d", dec_case},
		/*{"i", dec_case},
		{"b", bin_case},
		{"u", uns_case},
		{"o", oct_case},
		{"x", lhex_case},
		{"X", uhex_case}*/
		};

	while (i < 3)
	{
		if (*arg == *(formats[i]).pfcase)
			return ((formats[i].convfun));
		i++;
	}
	return (NULL);
}
