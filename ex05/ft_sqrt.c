int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 0;
	while (i <= nb / 2 && i <= 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_sqrt(atoi(av[1])));
	else
		return (0);
}
*/
