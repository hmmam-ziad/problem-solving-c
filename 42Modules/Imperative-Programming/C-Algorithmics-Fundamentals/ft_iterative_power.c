#include <unistd.h>

int ft_iterative_power(int nb, int power);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
    ft_putnbr(ft_iterative_power(3, 2));
    return 0;
}

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return 0;
    int result = 1;
    while (power >= 1)
    {
        result = result * nb;
        power--;
    }
    return result;
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
