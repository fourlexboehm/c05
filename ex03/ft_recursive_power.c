int	ft_recursive_power(int nb, int power)
{

	if (power < 0 )
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	else
		return (0);
}
*/
