char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		if (*temp >= 65 && *temp <= 90)
		{
			*temp = *temp + 32;
		}
		temp++;
	}
	return (str);
}
