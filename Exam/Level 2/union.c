#include <unistd.h>

int	check_unique(char *str, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void put_str(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		int k = 0;
		char store[100];

		while (argv[1][i] != '\0')
		{
			if (check_unique(store, argv[1][i]) == 1)
			{
				store[k] = argv[1][i];
				k++;
			}
			i++;
		}
		while (argv[2][j] != '\0')
		{
			if (check_unique(store, argv[2][j]))
			{
				store[k] = argv[2][j];
				k++;
			}
			j++;
		}
		store[k] = '\0';
		put_str(store);
	}
	write(1, "\n", 1);
}

