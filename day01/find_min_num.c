#include <unistd.h>

int find_min_num(int arr[], int len);
void ft_putchar(char c);
void ft_putnbr(int n);

int main()
{
	int arr[] = {100, 99, 5, 3, 2, 1, 11, 0, -1};
	int len = sizeof(arr) / sizeof(arr[0]);

	int min = find_min_num(arr, len);
	ft_putnbr(min);
}



void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if(n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if(n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int find_min_num(int arr[], int len)
{
	int min = arr[0];
	int i = 1;
	while(i < len)
	{
		if(arr[i] < min)
			min = arr[i];
		i++;
	}
	return min;
}


