#include <unistd.h>

void ft_putchar(char c)
{
	write (1 , &c, 1);
}

void ft_print_combn(int n)
{
	int a,b;

	for(a=0; a<=8; a++)
	{
		for(b=1; b<=9; b++)
		{
			ft_putchar(a+'0');
			ft_putchar(b+'0');
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_combn(10);
	return 0;
}
