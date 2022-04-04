#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char c;
    c = '0';
    // c is iteratively incremented after execution of ft_putchar until 'z' is reached 
    while(c <= '9')
        ft_putchar(c++);
}

int main(void)
{
    ft_print_numbers();
    return 0;
}