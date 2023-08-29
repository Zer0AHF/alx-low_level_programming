#include "main.h"

/**
 * main - checks for uppercase letters
 * @c: is the letter tobe checked
 * Returns: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
