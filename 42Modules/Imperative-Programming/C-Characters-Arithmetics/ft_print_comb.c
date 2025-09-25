#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char c);

int main()
{
    ft_print_comb();
    
    return 0;
}

void ft_print_comb()
{
    int i = 0, j = 0, k = 0;
    
    while(i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                ft_putchar(i + '0');
                ft_putchar(j + '0');
                ft_putchar(k + '0');
                if (!(i == 7 && j == 8 && k == 9))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
    
    
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
