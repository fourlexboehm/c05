int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	while (!ft_is_prime(nb))
		nb ++;
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_find_next_prime(atoi(av[1])));
	else
		return (0);
}
*/
