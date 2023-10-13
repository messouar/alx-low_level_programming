#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Function to print numbers
 * Description: Print sequence from 1 to 14 repeat 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 48;
	int c = 0;
	int flag;
	int max = 57;

	for (c = 0; c < 10; c++)
	{
		flag = 0;
		i = 48;
		max = 57;
		
		while(i <= max)
		{
			if (flag == 1)
				_putchar(49);
			
			_putchar(i);
			i++;

			if (i > 57)
			{
				i = 48;
				max = 52;
				flag = 1;
			}

		}

		_putchar('\n');
	}
}
