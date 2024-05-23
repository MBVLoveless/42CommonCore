#include "ft_printf.h"
#include <stdio.h>

int	main (void)
{
	ft_printf("My printf: %p %p ", 0, 0);
	printf("Original printf: %p %p ", 0, 0);
	return (0);
}
