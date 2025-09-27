#include <unistd.h>
#include <stdlib.h>
int str_len(char *str);
char *append_str(char *s1, char *s2);
void ft_putchar(char c);

int main()
{
	char *s1 = "Hmmam";
	char *s2 = "Ziad";
	char *con = append_str(s1, s2);
	int i = 0;
	while (con[i] != '\0')
	{
		ft_putchar(con[i]);
		i++;
	}
	free(con);
	return 0;
}

int str_len(char *str)
{
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return count;
}

char *append_str(char *s1, char *s2)
{
	int strlen = str_len(s1) + str_len(s2);
	char *con = malloc((strlen + 2) * sizeof(char));
	int i = 0, j = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	con[i++] = ' ';
	while (s2[j] != '\0')
	{
		con[i] = s2[j];
		j++;
		i++;
	}
	con[i] = '\0';
	return con;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
