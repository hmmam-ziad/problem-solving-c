#include <unistd.h>

int palindrome(char *str, int len);
int ft_strlen(char *str);
void ft_putchar(char c);

int main()
{
    char *str = "Hmmammh";
    int len = ft_strlen(str);
    if (palindrome(str, len) == 0)
    {
        write(1, "The str is Palindrome\n", 22);
    }
    else
    {
        write(1, "The str is not Palindrome\n", 26);
    }
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int palindrome(char *str, int len)
{
    int count = 0;
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] != str[--len])
            count++;
        i++;
    }
    return count;
}