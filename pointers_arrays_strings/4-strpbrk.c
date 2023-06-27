char
*_strpbrk(char *s, char *accept)
{
	int len;

	while (*s != '\0')
	{
		for (len = 0; accept[len] != '\0'; len++)
		{
			if (*s == accept[len])
				return (s);
		}
		s++;
	}

	return (0);
}
