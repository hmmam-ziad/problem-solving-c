#include <unistd.h>

void remove(char *str, char r);
void ft_putchar(char c);

int main()
{
	char s[] = "Hmmam Amjad";
	int j = 0;
	while (s[j] != '\0')
	{
		ft_putchar(s[j]);
		j++;
	}
	remove(s, 'm');
	ft_putchar('\n');
	int i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void remove(char *str, char r)
{
	int i = 0, j;
	while (str[i] != '\0')
	{
		if (str[i] == r)
		{
			j = i;
			while (str[j] != '\0')
			{
				str[j] = str[j + 1];
				j++;
			}
		}
		else i++;
	}
}
