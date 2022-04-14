#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
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
    ft_print_pos(i, n);
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_combn(int n)
{
    int decomposition[10];
    int i = 0;
    int current = 0;
    int diz = 1;
    while (i < 10)
    {
        decomposition[i] = i+1;
        i++;
    }
    decomposition[n] = -1;

    i = 0;
    diz = 1;
    current = 0;
    while(i < n)
    {
        current += decomposition[i]*diz;
        diz *= 10;
    }
    // CONTINUE HERE
}

int main (void)
{
    ft_print_combn(4);
}