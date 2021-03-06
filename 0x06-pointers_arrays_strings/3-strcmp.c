#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string.
 *
 * Return: 0 if the strings are similar,
 * the ASCII value of s1 - s2 otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
