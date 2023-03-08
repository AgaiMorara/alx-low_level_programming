/**
 *_strspn - gets the length of a prefix substring
 *@accept: string with bytes that can be accepted;
 *@s: string for checking
 *Return: length
 */
unsigned int _strspn( char *s, char *accept)
{
	int i = 0;
	char *source = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				i++;
			}
			else
				accept++;
			accept = source;
		}
		s++;
	}

	return (i);
}
