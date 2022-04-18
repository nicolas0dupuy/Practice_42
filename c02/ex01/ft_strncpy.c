char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while(*src && (i < n))
    {
        *(dest + i) = *src;
        src++;
        i++;
    }
    while (i + 1 < n)
    {
        *(dest + i) = 0;
        i++;
    }
    return dest;
}

#include <stdio.h>
int main()
{
    char src[10] = "avion";
    char dest[2];
    char *res ;

    res = ft_strncpy(dest, src, 5);
    printf("%s", res);
}