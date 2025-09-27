#include <unistd.h>

int count_vowles(char *str);
int is_vowles(char v);
void ft_putchar(char c);
void ft_putnbr(int nbr);

int main()
{
	char *str = "zacevbnmlkj";
	int count = count_vowles(str);
	ft_putnbr(count);
}

int count_vowles(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i] != '\0')
	{
		if(is_vowles(str[i]))
			count++;
		i++;
	}
	return count;
}

int is_vowles(char c)
{
	return (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U');
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
