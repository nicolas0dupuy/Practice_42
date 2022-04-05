#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char is_valid(int i, int n)
{
    char ok = 1;
    int new;
    while (n > 1)
    {
        new = i%10;
        i /= 10;
        if (new <= i%10)
        {
            ok = 0;
            break;
        }
        n--;
    }
    return (ok);
}

void ft_print_pos(int i, int n)
{
    if (n > 1)
    {
        ft_print_pos(i/10, n-1);
    }
    ft_putchar('0' + i%10);
}

void ft_print_decomposition(int i, int n)
{
    if(is_valid(i, n))
    {
        ft_print_pos(i, n);
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_combn(int n)
{
    unsigned int max = 1;
    unsigned int i = 0;
    unsigned int m = (unsigned int)n;
    
    while (m > 0)
    {
        max *= 10;
        m--;
    }
    max -= 1;
    while (i <= max)
    {
        ft_print_decomposition(i, n);
        i++;
    }
}

int main (void)
{
    ft_print_combn(4);
}