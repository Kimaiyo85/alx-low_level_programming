#include "stdio.h"

/**
* print_alphabet_x10 - repeats the print_alphabet 10 times.
* Return (0) success.
*/

void print_alphabet_x10(void)

{
	int n, co;

	co = 0;

	while (co < 10)

	{

		for (n = 'a'; n <= 'z'; n++)

		{

			_putchar(n);

		}

		co++;

		_putchar('\n');

		}
}
