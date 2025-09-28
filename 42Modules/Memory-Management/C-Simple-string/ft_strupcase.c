char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		if (*temp >= 97 && *temp <= 122)
			*temp = *temp - 32;
		temp++;
	}
	return (str);
}
