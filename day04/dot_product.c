#include <unistd.h>

int dot_product(int *arr1, int *arr2, int len);
void ft_putchar(char c);
void ft_putnbr(int nb);

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {6, 7, 8, 9, 10};
	int len = sizeof(arr1) / sizeof(arr1[0]);
	
	int sum = dot_product(arr1, arr2, len);
	ft_putnbr(sum);
	ft_putchar('\n');
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

int dot_product(int *arr1, int *arr2, int len)
{
	int sum = 0;
	int i = 0;
	while (i < len)
	{
		sum = sum + (arr1[i] * arr2[i]);
		i++;
	}
	return sum;
}
