#include <unistd.h>

int summation(int arr[], int len);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int len = sizeof(arr)/ sizeof(arr[0]);
	int sum = summation(arr, len);
	ft_putnbr(sum);
	return 0;
}

int summation(int arr[], int len)
{
	int sum = 0;
	int i = 0;
	while (i < len)
	{
		sum = sum + arr[i];
		i++;
	}
	return sum;
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
