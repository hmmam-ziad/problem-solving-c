#include <unistd.h>

int find_max_num(int arr[], int len);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
	int arr[] = {99, 250, -1, 0, 33, 1, 44};
	int len = sizeof(arr) / sizeof(arr[0]);

	int max = find_max_num(arr, len);
	ft_putnbr(max);
}

int find_max_num(int arr[], int len)
{
	int max = arr[0];
	int i = 1;
	while (i < len)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return max;
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
