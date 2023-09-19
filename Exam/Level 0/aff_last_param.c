#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = 0;
		argc--;
		while(argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, '\n', 1);
	return (0);
}
