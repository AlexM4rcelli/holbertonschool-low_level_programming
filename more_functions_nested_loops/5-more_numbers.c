#include "main.h"

void
more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{

			if (j >= 10)
			{
				int digits;
				for (digits = 0; digits < 2; digits++)
				{
					int dd;
					if (digits == 0)
						dd = j / 10;
					else
						dd = j % 10;
					_putchar(dd + '0');
				}
			} else
			{
				_putchar(j + '0');
			}

		}
		_putchar('\n');
	}
}
