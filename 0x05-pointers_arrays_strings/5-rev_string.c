#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string tobe reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len = 0;

	While (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
