void ft_sort_int_tab(int *tab, int size)
{
    if (size > 1)
    {
        ft_sort_int_tab(tab, size/2);
        ft_sort_int_tab(&(tab[size/2]), (size + 1)/2);
    }
    int i = 0;
    int j = size/2;
    while (i < size/2)
    {
        if (tab[i] < tab[j])
        {
            i++;
            continue;
        }
        else
        {
            // Compute how much to shift from j
            // prepare an arrat to store the too big i.s
            // perform the shift
        }
    }
}