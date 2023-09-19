int	max(int* tab, unsigned int len)
{
	unsigned int j = 0;
	int max = 0;

	while (j < len)
	{
		if (tab[j] > max)
			max = tab[j];
		j++;
	}
	return (max);
}
#include <stdio.h>
int main()
{
	int tab[] = {32, 43, 11, 32, 0, 80};
	printf("%d", max(tab, 6));
	return (0);
}
