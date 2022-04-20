int ft_str_is_lowercase(char *str)
{
    return ((*str >= 'a') && (*str <= 'z'));
}

char *ft_strupcase(char *str)
{
    int n = 0;
    int shift = 'A' - 'a';

    while (str[n])
    {
        if (ft_str_is_lowercase(&str[n]))
            str[n] += shift;
        n++;
    }
    return str;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        printf("Usage : Enter a string (under quotes if it has spaces.\n");
    else
    {
        printf("%s\n", ft_strupcase(argv[1]));
    }
}