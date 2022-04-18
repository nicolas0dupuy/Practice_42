int ft_strlen(char *str)
{
    int n = 0;

    while(*str)
    {
        n++;
        str++;
    }
    return n;
}

#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("USAGE : 1 string argument\n Count the string length");
    }
    else
    {
        printf("Len : %d\n", ft_strlen(argv[1]));
    }
    return 0;
}