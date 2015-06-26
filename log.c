#include "../libraire/libft.h"
#include <math.h>

int		main(void)
{
	int i;
	int n;
	i = 0;
	n = 15;
	while (i <= n)
	{
		ft_putnbr(exp(log(2) * i));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
