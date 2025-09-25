#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);
void ft_putnbr(int nb);

int main()
{
    ft_print_comb2();
    
    return 0;
}

void ft_print_comb2()
{
    int i = 0, j = 0;
    
    while(i <= 98)
    {
        j = i + 1;
        while (j <= 99)
        {
            ft_putnbr(i);
            ft_putchar(' ');
            ft_putnbr(j);
            if(!(i == 98 && j == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            j++;
        }
        i++;
    }
    
    
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
