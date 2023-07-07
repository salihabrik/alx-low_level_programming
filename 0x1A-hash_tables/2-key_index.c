unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* Get the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Compute the index based on the hash value and size of the array */
	index = hash_value % size;

	return index;
}

