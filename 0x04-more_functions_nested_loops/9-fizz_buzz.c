#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by line 
 * but for multiples of three prints Frizz instead of the FrizzBuzz
 * and for the multiples of five prints Buzz
 * Return : Always 0 (Success)
 */

int main(void)
{
	int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        } else if (i % 3 == 0 && i % 5 != 0)
        {
            printf("Fizz ");
        } else if (i % 5 == 0 && i % 3 != 0)
        {
            printf("Buzz ");
        } else if (i == 1)
	{
		printf("%d", i);
	} else
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    return (0);
}
