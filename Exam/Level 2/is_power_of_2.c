int	is_power_of_2(unsigned int n)
{
	unsigned int num;
	while (n % 2 == 0)
	{
		num = n % 2;
		n = n / 2;
		if (n == 1)
			return (1);
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%d\n", is_power_of_2(512));
	return (0);
}
