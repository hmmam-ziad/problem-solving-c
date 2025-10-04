#include <unistd.h>

int is_postal_code(char *postal_code);
int ft_strlen(char *str);
int ft_isalpha(char c);
int ft_isdigit(char c);

int main()
{
    char code1[] = "L8K 4B";
    
    if (is_postal_code(code1))
    {
        write(1, "this is postal code: \n", 23);
        write(1, code1, ft_strlen(code1));
    }
    else
    {
        write(1, "this is not postal code: \n", 27);
        write(1, code1, ft_strlen(code1));
    }
    return 0;
}

int ft_strlen(char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

int ft_isalpha(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int is_postal_code(char *postal_code)
{
    if (ft_strlen(postal_code) != 7)
        return 0;
    if (!ft_isalpha(postal_code[0]) && !ft_isalpha(postal_code[2]) && !ft_isalpha(postal_code[5]))
        return 0;
    if (postal_code[3] != ' ')
    if (!ft_isdigit(postal_code[1]) && !ft_isdigit(postal_code[4]) && !ft_isdigit(postal_code[6]))
        return 0;
    return 1;    
}
