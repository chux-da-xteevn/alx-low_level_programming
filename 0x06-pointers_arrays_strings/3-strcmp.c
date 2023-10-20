/**
 * _strcmp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0 if the strings match, a negative value if s1 is less than s2, or a
 *         positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
		;

	return (s1[i] - s2[i]);
}
