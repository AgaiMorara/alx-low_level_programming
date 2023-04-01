/**
 *_strspn - gets the length of a prefix substring
 *@accept: string with bytes that can be accepted;
 *Return: length
 */
unsigned int _strspn( char *s, char *accept)
{
	int i = 0;
	char *source = accept;

	while (*s != '\0')
	{
		while (*source != '\0')
		{
			if (*s == *accept)
			{
				source = accept;
				i++;
			}
			source++;
		}
		if (*source == '\0')
			break;
		s++;
	}

	return (i);
}
