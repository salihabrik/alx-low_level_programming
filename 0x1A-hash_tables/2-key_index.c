#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);

	index = hash_value % size;

	return index;
}

