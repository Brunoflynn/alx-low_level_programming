/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to set
 *
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64) // check if index is out of range
	return (-1);

	*n |= 1ul << index; // set the bit at the given index to 1

	return (1); // return 1 to indicate success
}
