#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be cheched
 * Return: 1 for lowercase letter or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
