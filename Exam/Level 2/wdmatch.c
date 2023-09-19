#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int j = 0;
	int	len = 0;

	if (ac == 3)
	{
		while (av[1][len] != '\0')
			len++;
		while (av[2][i] != '\0')
		{
			if (av[1][j] == av[2][i])
				j++;
			i++;
		}	
		if (j == len)
		{
			j = 0;
			while (av[1][j] != '\0')
			{
				write(1, &av[1][j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
