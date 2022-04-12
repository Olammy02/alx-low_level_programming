/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int l)
{
	if(((l >= 'a') && (l <= 'z')) || ((l >= 'A') && (l <= 'Z')))
		return (1);
	else
		retun(0);
}
