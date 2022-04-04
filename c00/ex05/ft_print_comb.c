#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_triplet(int i, int j, int k)
{
    ft_putchar('0' + i);
    ft_putchar('0' + j);
    ft_putchar('0' + k);
}

void ft_print_comb(void)
{
    int i = 0, j = 1, k = 2;
    while(i <= 7)
    {
        while(j <= 8)
        {
            while(k <= 9)
            {
                ft_print_triplet(i, j, k);
                if (i < 7 || j < 8 || k < 9)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                k++;
            }
            j++;
            k = j + 1;
        }
        i++;
        j = i + 1;
        k = j + 1;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}