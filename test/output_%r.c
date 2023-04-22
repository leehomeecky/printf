int output_%r(va_list arg)
{
	int i = 0, j;
	char *s = va_arg(arg, char *);
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
