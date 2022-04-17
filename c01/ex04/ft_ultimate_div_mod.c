void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp_a = *a;
    int tmp_b = *b;
    *a = tmp_a/tmp_b;
    *b = tmp_a%tmp_b;
}