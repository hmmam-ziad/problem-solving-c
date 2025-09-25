#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);

int main()
{
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648\n", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}
