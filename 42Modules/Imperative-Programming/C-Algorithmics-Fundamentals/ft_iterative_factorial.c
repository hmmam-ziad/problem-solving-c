#include <unistd.h>

int ft_iterative_factorial(int nb);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
    ft_putnbr(ft_iterative_factorial(5));
    return 0;
}

int ft_iterative_factorial(int nb)
{
    int result = 1;
    
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    while (nb > 1)
    {
        result *= nb;
        nb--;
    }
    return (result);
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
