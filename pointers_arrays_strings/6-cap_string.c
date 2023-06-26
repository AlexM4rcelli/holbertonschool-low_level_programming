char
*cap_string(char *str)
{
	int len, len2;

	char chars[] = " \t\n,;.!?\"(){}";

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len == 0)
		{
			if ((str[len] >= 'a' && str[len] <= 'z'))
			{
				str[len] = str[len] - 32;
			}
		}

		for (len2 = 0; chars[len2] != '\0'; len2++)
		{
			if (str[len] == chars[len2])
			{
				if (str[len + 1] >= 'a' && str[len + 1] <= 'z')
				{
					str[len + 1] = str[len + 1] - 32;
				}
			}
		}
	}

	return (str);
}
