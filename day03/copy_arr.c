#include <unistd.h>
#include <stdlib.h>

int *copy_arr(int *arr, int len);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6}; 
    int len_a = sizeof(a) / sizeof(a[0]);
    int *a_copy = copy_arr(a, len_a);
    
    int i = 0;
    
    while (i < len_a)
    {
        ft_putnbr(a_copy[i]);
        i++;
    }

    return 0;
}

int *copy_arr(int *arr, int len)
{
    int i = 0;
    int *c = malloc(len * sizeof(int));
    while (i < len)
    {
        c[i] = arr[i];
        i++;
    }
    return (c);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
