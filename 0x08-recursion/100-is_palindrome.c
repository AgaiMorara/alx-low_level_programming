#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - checks if a string is a palindrome
 * @s: string to check
 *@start: first char to compare
 *@end: pair position to compare with
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (1 * is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 *is_palindrome - wrapper of the real is palindrome function
 *@s: string to check
 *Return: 1 if palindrome, o otherwise
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
