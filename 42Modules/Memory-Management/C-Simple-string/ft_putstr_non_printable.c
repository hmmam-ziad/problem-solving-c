#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hexa_selector;

	i = 0;
	hexa_selector = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &hexa_selector[(unsigned char)str[i] / 16], 1);
			write(1, &hexa_selector[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
