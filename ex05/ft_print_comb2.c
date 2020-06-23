#include <unistd.h>

void ft_putchar(char c)
{
	write (1 , &c, 1);
}

void ft_print_comb2(void)
{
	int a,b,c,d;
	for(a = 0; a <=9; a++)
	{
		for(b=0; b<=8; b++)
		{
			for(c=0; c<=9; c++)
			{
				for(d=1; d<=9; d++)
				{	
					ft_putchar(a+'0');
					ft_putchar(b+'0');
					ft_putchar(' ');
					ft_putchar(c+'0');
					ft_putchar(d+'0');
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
