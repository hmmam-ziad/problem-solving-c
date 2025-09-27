#include <unistd.h>
// this is function take an array and length and to_fine as parametar
// this function count the same number in the array
int ft_count(int arr[], int len, int to_find);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
	int arr[] = {1, 2, 3, 3, 3, 4, 5, 6, 6, 6};
	int to_find = 6;
	int len = sizeof(arr) / sizeof(arr[0]);

	int count = ft_count(arr, len, to_find);

	write(1, "The number was found many times :", 33);
	ft_putnbr(count);
}

int ft_count(int arr[], int len, int to_find)
{
	int count = 0;
	int i = 0;

	while (i < len)
	{
		if (arr[i] == to_find)
			count++;
		i++;
	}
	return count;
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
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
