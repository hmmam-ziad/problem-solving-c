#include <unistd.h>

int convert(char *str);
int power(int base, int power);
int str_len(char *str);
void ft_putchar(char c);
void ft_putnbr(int nb);

int main()
{
    int con = convert("101011111");
    ft_putnbr(con);
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}

int power(int base, int po)
{
    int result = 1;
    int i = 0;
    while (i < po)
    {
        result *= base;
        i++;
    }
    return result;
}

int str_len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int convert(char *str)
{
    int decval = 0;
    int len = str_len(str);
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '1')
            decval += power(2, (len - 1 - i));
        i++;
    }
    return decval;
}
