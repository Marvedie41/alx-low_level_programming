/**
 * wildcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 1 if the strings are identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (!s1 || !*s1)
	{
		if (s2 && *s2)
		{
			if (*s2 == '*')
			{
				return (wildcmp(s1, s2 + 1));
			}
			return (0);
		}
		return (1);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
