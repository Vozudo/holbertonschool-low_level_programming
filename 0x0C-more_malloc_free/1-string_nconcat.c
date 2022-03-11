#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenate 2 strings
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: Null or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int len, a, b;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	len = (unsigned int)_lent(s1);
	s = malloc((len + 1 + n) * sizeof(char));
	if (s == 0)
		return (0);
	for (a = 0, b = 0; a < (len + n); a++)
	{
		if (a < len)
			s[a] = s1[a];
		else
			s[a] = s2[c++];
	}
	s[a] = '\0';

	return (s);
}

/**
 * _lent - lenght
 * @l: string
 * Return: string lenght
 */
int _lent(char *l)
{
	int c;

	for (c = 0; l[c] != '\0'; c++)
		;
	return (c);
}
