#include <unistd.h>
#include <stdlib.h>

int	char_convert_int(char *number)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (number[i])
	{
		result = result * 10 + number[i] - '0';
		i++;
	}
	return (result);
}

int prime_check(int num)
{
	int i;

	i = 2;
	if (num < 2)
		return (0);
	while (num % i != 0)
		i++;
	if (i == num)
		return (i);
	else
		return (0);
}

void	ft_putnbr(int digits)
{
	char c;
	c = digits + 48;
	if (digits > -1 && digits < 10)
		write(1, &c, 1);
	if (digits > 9)
	{
		ft_putnbr(digits / 10);
		ft_putnbr(digits % 10);
	}
}

int main(int argc, char **argv)
{
	int	number;
	int	i;
	int add;
	int a;
	int prime;

	if (argc == 2)
	{
		a = 0;
		number = char_convert_int(argv[1]);
		i = 0;
		add = 0;
		while (i <= number)
		{
			if (prime_check(i) != 0)
			{
				prime = prime_check(i);
				add += prime;
			}
			i++;
		}
		ft_putnbr(add);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
