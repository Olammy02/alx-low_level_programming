/**
 * main - check the code.
 *
 * Return: Always 0.
 */
print_alphabet_x10(void)
{
	int n, i;

	i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		i++;
	-putchar('\n');
	}
