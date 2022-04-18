void ft_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void ft_rev_int_tab(int *tab, int size)
{
    int n = 0;
    while (n < size / 2)
    {
        ft_swap(&(tab[n]), &(tab[size - n - 1]));
        n++;
    }
}

#include <stdio.h>

int main()
{
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int t2[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    

    ft_rev_int_tab(t, 10);
    ft_rev_int_tab(t2, 11);
    for (int i = 0; i < 10; i++){
        printf("%d ", t[i]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++){
        printf("%d ", t2[i]);
    }
}