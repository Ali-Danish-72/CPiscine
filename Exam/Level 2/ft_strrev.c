char	*ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char temp;
	while (str[len])
		len++;
	len--;
	while ( i < (len / 2))
	{
		temp = str[len - i];
		str[len - i] = str[i];
		str[i++] = temp;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "HELLO FOIWEJ";
	printf("%s", ft_strrev(str));
	return (0);
}
*/
