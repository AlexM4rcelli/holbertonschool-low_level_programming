char
*_strstr(char *s, char *accept)
{
	int len, lenN, count;

	for (lenN = 0; accept[lenN] != '\0'; lenN++)
		;

	while (*s != '\0')
	{
		for (len = 0; accept[len] != '\0'; len++)
		{
			if (*s == accept[len])
				count++;
				if (count == lenN)
					return (s);
		}
		s++;
	}

	return (0);
}