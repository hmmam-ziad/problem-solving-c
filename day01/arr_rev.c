#include <unistd.h>

int *ft_revers(int arr[], int len);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 99, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    ft_revers(arr, len);
    
    int i = 0;
    while (i < len)
    {
        ft_putnbr(arr[i]);
        ft_putchar(' ');
        i++;
    }

    return 0;
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

int *ft_revers(int arr[], int len)
{
    int temp;
    int i = 0;
    while (i < len)
    {
        temp = arr[i];
        arr[i] = arr[--len];
        arr[len] = temp;
        i++;
    }
    return arr;
}