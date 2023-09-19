#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swap_store;

    i = 0;
    while (tab[i] != '\0')
    {

        while (tab[i] > tab[size])
        {
            if (tab[i] > tab[i + 1] && tab[i + 1] != '\0')
            {
                swap_store = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tab[i];
            }
            i++;
        }
    }
}

int main(void)
{
    int tab[] = {2, 4, 1, 6, 322, 3, 9, 5, 7, 34};
    int i;
    printf("The sequence before sorting is: ");
    for (i = 0; i < 10; ++i)
    {
        printf("%.d ", tab[i]);
    }
    ft_sort_int_tab(tab, 10);
    printf("\nThe sequence after sorting is:\n");
    for (i = 0; i < 10; ++i)
    {
        printf("%.d ", tab[i]);
    }
    return (0);
}