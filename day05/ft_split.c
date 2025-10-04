#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str);
int ft_wordcount(char *str);
char *ft_worddup(char *start, char *end);
char **ft_split(char *str);
int is_space(char c);

int main()
{
    char **words = ft_split("   Hmmam Ziad    ");
    int i = 0;
    while (words[i])
    {
        ft_putstr(words[i]);
        write(1, "\n", 1);
        free(words[i]);
        i++;
    }
    free(words);
    return 0;
}

int is_space(char c)
{
    return (c == '\0' || c == '\n' || c == '\t' || c == ' ');
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

int ft_wordcount(char *str)
{
    int count = 0;
    int in_word = 0;
    while (*str)
    {
        if (in_word == 0 && !(is_space(*str)))
        {
            in_word = 1;
            count++;
        }
        else if (in_word == 1 && is_space(*str))
            in_word = 0;
        str++;
    }
    return count;
}

char *ft_worddup(char *start, char *end)
{
    char *word;
    int i = 0;
    int len = end - start;
    word = malloc(len + 1);
    if (!word)
        return NULL;
    while (i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0';
    return word;
}

char **ft_split(char *str)
{
    char **result;
    int words = ft_wordcount(str);
    int i = 0;
    
    result = (char **)malloc((words + 1) * sizeof(char *));
    if (!result)
        return NULL;
    while (*str)
    {
        while (*str && is_space(*str))
            str++;
        char *start = str;
        while (*str && !(is_space(*str)))
            str++;
        if (start < str)
        {
            result[i] = ft_worddup(start, str);
            i++;
        }
    }
    result[i] = NULL;
    return result;
}