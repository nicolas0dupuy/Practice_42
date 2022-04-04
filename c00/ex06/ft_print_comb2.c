#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_nb(int i)
{
    ft_putchar('0' + i/10);
    ft_putchar('0' + i%10);
}

void ft_print_duo(int i, int j)
{
    ft_print_nb(i);
    ft_putchar(' ');
    ft_print_nb(j);
}

void ft_print_comb2(void)
{
    int i = 0, j = 1;
    while (i <= 98)
    {
        while (j <= 99)
        {
            ft_print_duo(i, j);
            j++;
            if (i < 98 || j < 99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
        i++;
        j = i + 1;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}