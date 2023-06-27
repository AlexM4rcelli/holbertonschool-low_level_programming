unsigned int
_strspn(char *s, char *accept)
{
	int len, lens, lena;

	len = 0;

	for (lens = 0; s[lens] != '\0'; lens++)
	{
		for (lena = 0; accept[lena] != '\0'; lena++)
		{
			if (s[lens] == accept[lena])
			{
				len++;
			}
		}
		if (s[lens] != accept[lena])
		{
			return (len);
		}
	}
	return (len);
}
