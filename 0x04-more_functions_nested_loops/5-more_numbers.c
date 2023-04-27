#include <unistd.h>

/**
 * more_numbers - prints 0-14 ten times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				/* prints tens digit */
				write(1, "1", 1);
			}
			/* prints ones digit */
			write(1, &"0123456789"[j % 10], 1);
		}
		/* prints newline */
		write(1, "\n", 1);
	}
}
