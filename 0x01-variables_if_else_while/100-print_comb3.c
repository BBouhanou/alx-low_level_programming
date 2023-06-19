#include<stdio.h>
#include<unistd.h>
/**
  *main - Entrey point
  *Description: prints two digits combination
  *return: retun alwyays 0
  */
int main(void)
{
	int i, c;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
