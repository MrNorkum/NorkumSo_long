#include <stdlib.h>

int	ft_numlen(int num)
{
	int	i;

	i = 1;
	if (!num)
		return (2);
	if (num < 0)
		i++;
	while ((num > 0 || num < 0) && ++i)
		num /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*arr;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	if (n < 0)
		nb = -nb;
	arr = (char *)malloc(sizeof(char) * len);
	if (!arr)
		return (NULL);
	if (n < 0)
		arr[0] = '-';
	if (n == 0)
		arr[0] = '0';
	arr[--len] = '\0';
	while (nb > 0)
	{
		arr[--len] = nb % 10 + 48;
		nb /= 10;
	}
	return (arr);
}