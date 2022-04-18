char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(*src)
    {
        *(dest + i) = *src;
        src++;
        i++;
    }
    *(dest + i) = 0;
    return dest;
}

#include <stdio.h>

int main()
{
    char src[10] = "avion";
    char dest[10];
    char *res ;

    res = ft_strcpy(dest, src);
    printf("%s", res);
}