#include <unistd.h>

int fibonacci(int nbr);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
	int f = fibonacci(6);
	ft_putnbr(f);

}

int fibonacci(int nbr)
{
	if (nbr == 1 || nbr == 0)
	{
		return nbr;
	}
	else if (nbr > 1)
	{
		return fibonacci(nbr - 1) + fibonacci(nbr - 2);
	}
	else 
	{
		return -1;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}
