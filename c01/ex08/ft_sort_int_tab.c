#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    if (size > 1)
    {
        ft_sort_int_tab(tab, size/2);
        ft_sort_int_tab(&(tab[size/2]), (size + 1)/2);
    }
    int i = 0;
    int j = size/2;
    while ((i < j) && (j < size))
    {
        if (tab[i] <= tab[j])
        {
            i++;
            continue;
        }
        else
        {
            int tmp = tab[i];
            tab[i] = tab[j];
            int k = j;
            while (k > i + 1)
            {
                tab[k] = tab[k - 1];
                k--;
            }
            tab[i+1] = tmp;
        }
        j++;
        i++;
    }
}

int main()
{
    int tab[10] = {2, 1, 3, 9, 5, 4, 8, 6, 4, 2};
    int tab2[11] = {2, 1, 3, 9, 5, 7, 8, 6, 4, 2, 4};
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    ft_sort_int_tab(tab, 10);
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    for(int i = 0; i < 11; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    ft_sort_int_tab(tab2, 11);
    for(int i = 0; i < 11; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
}