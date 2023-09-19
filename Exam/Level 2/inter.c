/*
 * A code that will check if the character from the first string is seen in the second string.
 * If seen, send it to a string pointer. Then continue to see if the next character is found.
 * If not found, check the next one, hence nested while loops are necessary.
 * Seperate counters are required to go through the two strings and the variable.
 */
#include <unistd.h>

int chk_dup(char *str, char c)
{
	int i = 0;
	while (str[i])
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
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int		i = 0;
		int		j = 0;
		int		k = 0;
		char	str[100];

		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j])
				{
					if (chk_dup(str, av[1][i]) == 1)
					{
						str[k] = av[1][i];
						k++;
					}
				}
				j++;
			}
			i++;
		}
		put_str(str);
	}
	write(1, "\n", 1);
	return (0);
}
