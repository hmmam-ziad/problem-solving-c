int	is_speacial_char(char c)
{
	if (c <= 47 || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || c >= 123)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') && is_speacial_char(str[i - 1]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
