#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char c;
    c = 'a';
    // c is iteratively incremented after execution of ft_putchar until 'z' is reached 
    while(c <= 'z')
        ft_putchar(c++);
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}