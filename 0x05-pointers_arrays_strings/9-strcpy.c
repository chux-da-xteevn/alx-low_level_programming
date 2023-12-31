/**
 * _strcpy - Copies a string from source to destination
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to the destination buffer `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /* Ensure the destination string is null-terminated */

	return (dest);
}
