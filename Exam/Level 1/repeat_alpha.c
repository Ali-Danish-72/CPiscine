#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int num;

	i = 0;
	num = 0;
	if (argc == 2)
	{
		while (argv[1][i] != 0)
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				num = argv[1][i] - 96;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				num = argv[1][i] - 64;
			while (num != 1)
			{
				write(1, &argv[1][i], 1);
				num--;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
