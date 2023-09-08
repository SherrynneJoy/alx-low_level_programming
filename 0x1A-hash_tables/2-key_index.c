#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*calculating has value using hash_djb2*/
	unsigned long int hash = hash_djb2(key);

	unsigned long int index = hash % size;

	return (index);
}
