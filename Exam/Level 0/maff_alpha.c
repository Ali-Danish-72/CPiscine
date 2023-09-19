#include <unistd.h>

void	maff_alpha(void)
{
	char	a;
	char	B;

	a = 'a';
	B = 'B';
	while (a <= 'y' && B <= 'Z')
	{
		write(1, &a, 1);
		write(1, &B, 1);
		a += 2;
		B += 2;
	}
}

int	main(void)
{
	maff_alpha();
	return (0);
}
