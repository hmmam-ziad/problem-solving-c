#include <unistd.h>

int ft_fibonacci(int index);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
    ft_putnbr(ft_fibonacci(7));
    return 0;
}

int ft_fibonacci(int index)
{
	if (index < 0)
		return -1;
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	return ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if(n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
