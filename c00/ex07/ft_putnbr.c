#include <unistd.h>

const int INT_MIN = -2147483648;
const int INT_MAX = 2147483647;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putpos(int nb)
{
    while(nb > 9)
    {
        ft_putpos(nb/10);
        nb %= 10;
    }
    ft_putchar('0' + nb);
}

void ft_putnbr(int nb)
{
    char is_min = 0;
    if (nb < 0)
    {
        ft_putchar('-');
        if (nb == INT_MIN)
        {
            nb /= 10;
            is_min = 1;
        }
        nb *= -1;
    }
    ft_putpos(nb);
    if (is_min)
        ft_putchar('8');
}

int main(void)
{
    ft_putnbr(INT_MIN);
    return 0;
}