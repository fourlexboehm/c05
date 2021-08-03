int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 1;
	x = nb;
	if (power < 0 )
		return (0);
	else if (power == 0)
		return (1);
	while (i++ < power)
		x *= nb;
	return (x);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	else
		return (0);
}
*/
