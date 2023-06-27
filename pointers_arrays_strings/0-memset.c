char
*_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}

	return (s);
}
