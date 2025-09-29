#include <unistd.h>

int *vector_add(int *arr1, int *arr2, int *result, int len);
void ft_putchar(char c);
void ft_putnbr(int nb);

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {6, 7, 8, 9, 10};
	int result[] = {0, 0, 0, 0, 0};
	int len = sizeof(arr1) / sizeof(arr1[0]);
	vector_add(arr1, arr2, result, len);

	int i = 0;
	while (i < len)
	{
		ft_putnbr(result[i]);
		ft_putchar(' ');
		i++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int *vector_add(int *arr1, int *arr2, int *result, int len)
{
	int i = 0;
	while (i < len)
	{
		result[i] = arr1[i] + arr2[i];
		i++;
	}
	return result;
}
