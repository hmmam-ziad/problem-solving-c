#include <unistd.h>

char *str_upper(char *str);
char *str_lower(char *str);
void ft_putchar(char c);

int main()
{
	char s1[] = "hmmam ziad";
	char s2[] = "HMMAM ZIAD";
	str_upper(s1);
	str_lower(s2);

	int i = 0, j = 0;
	while (s1[i] != '\0')
	{
		ft_putchar(s1[i]);
		i++;
	}
	ft_putchar('\n');
	while (s2[j] != '\0')
	{
		ft_putchar(s2[j]);
		j++;
	}
	return 0;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *str_upper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return str;
}

char *str_lower(char *str)
{
	int i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] += 32;
		i++;
        }
        return str;
}
