#include "main.h"

/**
 * replace - puts s string on pointer buffer
 * @buffer: Destination buffer
 * @s: String to put
 * @print_len: Final position
 * Return: Final position
 */

int replace(char *buffer, char *s, int print_len)
{
	int i = 0;

	while (s && s[i])
	{
		buffer[i] = s[i];
		print_len += 1;
		i++;
	}
	return (print_len);
}
