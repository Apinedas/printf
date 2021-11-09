#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: Pointer to destiny
 * @src: Pointer to source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

/**
 * rev_string - reverses a string.
 * @s: Pointer to string to reverse
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = _strlen(s) - 1;
	j = 0;
	while (i >= j)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i = i - 1;
		j++;
	}
}

/**
 * rot13 - encodes a string using rot13.
 * @s: String to encode
 * Return: Pointer to encoded string
 */

char *rot13(char *s)
{
	char ch[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z'};
	char ds[53] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm'};
	int i;
	int j;

	for (i = 0 ; (*(s + i) != '\0') ; i++)
	{
		for (j = 0 ; (*(ch + j) != '\0') ; j++)
		{
			if (*(s + i) == *(ch + j))
			{
				*(s + i) = *(ds + j);
				break;
			}
		}
		j = 0;
	}
	return (s);
}
