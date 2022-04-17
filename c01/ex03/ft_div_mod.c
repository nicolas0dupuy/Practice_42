void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a%b;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
    int div;
    int mod;
    if(argc != 3)
    {
        printf("Usage : give two integers a and b\nReturns the division and remainder of a by b.\n");
    }
    else
    {
    ft_div_mod(atoi(argv[1]), atoi(argv[2]), &div, &mod);
    printf("Division de %d par %d : div = %d, mod = %d\n", atoi(argv[1]), atoi(argv[2]), div, mod);
    }
    return 0;
}