#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    // c is iteratively decremented after execution of ft_putchar until 'a' is reached 
    while(c >= 'a')
        ft_putchar(c--);
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}