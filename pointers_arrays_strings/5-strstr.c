char
*_strstr(char *s, char *accept)
{
	int len, lenN, count;

	for (lenN = 0; accept[lenN] != '\0'; lenN++)
		;

	while (*s != '\0')
	{
		if (*s == accept[0])
		{
			count = 0;
			len = 1;
			while (*s == accept[len])
			{
				s++;
				len++;
				count++;
				if (count == lenN)
					return (s);
			}
		}
		s++;
	}

	return (0);
}
