char
*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		dest[len] = src[len];
	}

	return (dest);
}
