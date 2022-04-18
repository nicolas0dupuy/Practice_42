int ft_str_is_alpha(char *str)
{
    return ((*str >= 'a' && *str <= 'z') ||
        (*str >= 'A' && *str <= 'Z') ||
        (*str >= '0' && *str <= '9'));
}

#include <stdio.h>
int main()
{
    printf("True : %d\n", ft_str_is_alpha("h"));
    printf("False : %d\n", ft_str_is_alpha("\t"));
    return 0;
}