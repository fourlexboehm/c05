int	ft_iterative_power(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb >= 1)
		return (nb * ft_iterative_power(nb - 1));
	else 
		return (0);
}
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_iterative_power(atoi(av[1])));
	else
		return(0);
}
