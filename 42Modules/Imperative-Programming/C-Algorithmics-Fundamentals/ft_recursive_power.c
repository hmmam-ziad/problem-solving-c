#include <unistd.h>

int ft_recursive_power(int nb, int power);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
    ft_putnbr(ft_recursive_power(3, 2));
    return 0;
}

int  ft_recursive_power(int nb, int power)
{

 if (power < 0)
     return 0;
 if(power == 0)
 return 1;
 else
 return (nb * ft_recursive_power(nb, power-1));
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
