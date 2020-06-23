#include <unistd.h>

void ft_putchar(char c)
{
	write (1 , &c ,1);
}

void ft_putnbr(int nb)
{
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar('\n');
}

int main()
{
	int nb;
	ft_putnbr(42);
	return 0;
}
		
