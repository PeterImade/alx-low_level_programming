#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q')
		{
			continue;
		}
		else if (a == 'e')
		{
			continue;
		}
		else
		{
			putchar(a);
		}
	}

	putchar('\n');
	return (0);
}
