#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hs;
	int c;

	hs = 5381;
	while ((c = *str++))
		hs = ((hs << 5) + hs) + c; /* hs * 33 + c */

	return (hs);
}
