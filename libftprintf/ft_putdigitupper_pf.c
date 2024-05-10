/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigitupper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-30 03:38:13 by ricky             #+#    #+#             */
/*   Updated: 2024-04-30 03:38:13 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigitupper_pf(long nbr, int base)
{
	int		count;
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nbr < 0)
	{
		write (1, "-", 1);
		return (ft_putdigitupper_pf(nbr * -1, base) + 1);
	}
	else if (nbr < base)
		return (ft_putchar_pf(hex[nbr]));
	else
	{
		count = ft_putdigitupper_pf(nbr / base, base);
		return (count + ft_putdigitupper_pf(nbr % base, base));
	}
}
