#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int len = 0;

		while (argv[1][len])
			len++;
		len--;
		while (argv[1][len] == 9 || argv[1][len] == 32)
			len--;
		while (argv[1][i] == 9 || argv[1][i] == 32)
			i++;
		while (i <= len)
		{
			if (argv[1][i] > 32 && argv[1][i] < 127)
				write(1, &argv[1][i], 1);
			while (argv[1][i] == 32 || argv[1][i] == 9)
			{
				if (argv[1][i + 1] > 32 && argv[1][i + 1] < 127)
				{
					write(1, " ", 1);
					break;
				}
				i++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
