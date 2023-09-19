#include <unistd.h>

void	maff_revalpha(void)
{
	char	z;
	char	Y;

	z = 'z';
	Y = 'Y';
	while (z >= 'b' && Y >= 'A')
	{
		write(1, &z, 1);
		write(1, &Y, 1);
		z -= 2;
		Y -= 2;
	}
}

int	main(void)
{
	maff_revalpha();
	return (0);
}
