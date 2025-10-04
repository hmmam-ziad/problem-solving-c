#include <unistd.h>

void ft_putstr(char *str);
char *ft_replace_char(char *str, char to_replace, char to_remove);

int main()
{
    char str[] = "hmmem zied";
    ft_replace_char(str, 'a', 'e');
    ft_putstr(str);
    return 0;
}


void ft_putstr(char *str)
{
    int i = 0;
    write(1, "[", 1);
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "]", 1);
}


char *ft_replace_char(char *str, char to_replace, char to_remove)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_remove)
            str[i] = to_replace;
        i++;
    }
    return str;
}
