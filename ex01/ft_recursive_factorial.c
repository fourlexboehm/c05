int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else 
		return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_recursive_factorial(atoi(av[1])));
	else
		return(0);
}
*/
