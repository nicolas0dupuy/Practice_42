int ft_str_is_numeric(char *str)
{
    return ((*str >= '0') && (*str <= '9'));
}

#include <stdio.h>
int main()
{
    printf("Num : %d\n", ft_str_is_numeric("5"));
    printf("Not num : %d\n", ft_str_is_numeric("r"));
    return 0;
}