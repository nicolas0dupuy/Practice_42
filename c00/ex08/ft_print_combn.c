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

void ft_print_table(int * decomposition, int n)
{
    int i = 0;
    while(i < n)
    {
        ft_putchar('0' + decomposition[i]);
        i++;
    }
}

void ft_print_combn(int n)
{
    int decomposition[10];
    int i = 0;
    int ok = 1;
    while (i < 10)
    {
        decomposition[i] = i+1;
        i++;
    }
    decomposition[n] = -1;

    int k = 0;

    while(ok){
        ft_print_table(decomposition, n);
        i = n-1;
        while (i >= 0)
        {
            if (decomposition[i] == 10 - (n - i))
                i--;
            else
                break;
        }

        if (i >= 0)
        {
            decomposition[i] += 1;
            while (++i < n)
                decomposition[i] = decomposition[i-1] +1;
        }
        else
            ok = 0;
        
        if (ok)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}

int main (void)
{
    ft_print_combn(4);
}