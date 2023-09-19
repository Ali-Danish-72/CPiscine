#include <unistd.h>

int main(int argc, char **argv)
{
	int c;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c] != '\0')
		{
			if (argv[1][c] == 'a')
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				return (0);
			}
			c++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "a\n", 2);
}
