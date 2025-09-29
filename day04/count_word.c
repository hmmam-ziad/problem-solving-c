#include <unistd.h>

int count_word(char *str, char *word);
int str_len(char *s);
void ft_putnbr(int nb);

int main()
{
	char *str = "hmmam ziad";
	char *word = "hmmam";
	int count = count_word(str, word);
	ft_putnbr(count);
	return 0;
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb % 10 + '0');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int str_len(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;	
	}
	return len;
}

int count_word(char *str, char *word)
{
	int slen = str_len(str);
	int wlen = str_len(word);
	int end = slen - wlen + 1;
	int i = 0, j, count = 0;
	while (i < end)
	{
		int word_found = 1;
		j = 0;
		while (j < wlen)
		{
			if(word[j] != str[i + j])
			{
				word_found = 0;
				break;
			}
			j++;
		}
		if (word_found) count++;
		i++;
	}
	return count;
}

