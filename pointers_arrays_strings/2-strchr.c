char
*_strchr(char *s, char c)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (s);
		len++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
