/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 10:09:35 by ricky             #+#    #+#             */
/*   Updated: 2024-04-24 10:09:35 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		ft_putnbr_pf((nbr / 10));
		ft_putchar_pf('8');
		return (11);
	}
	else if (nbr < 0)
	{
		count += ft_putchar_pf('-');
		count += ft_putnbr_pf((nbr * -1));
	}
	else
	{
		if (nbr > 9)
			count += ft_putnbr_pf((nbr / 10));
		return (count += ft_putchar_pf((nbr + '0' % 10)));
	}
	return (count);
}
