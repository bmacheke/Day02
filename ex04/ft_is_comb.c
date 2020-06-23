#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_comb(void)
{
	int a,b,c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a+1; b <= 8; b++)
		{
			for (c = b+1; c <= 9; c++)
			{
				ft_putchar(a+'0');
				ft_putchar(b+'0');
				ft_putchar(c+'0');
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}

}

int main(void)
{
	ft_print_comb();
	return 0;
} 
