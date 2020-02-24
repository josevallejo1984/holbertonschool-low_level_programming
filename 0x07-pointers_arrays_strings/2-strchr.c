#include "holberton.h"

/**
 *_strchr - find el character c en *s
 *@s: pointer dest string
 *@c: character to find
 *Return: Always string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (0);
}

