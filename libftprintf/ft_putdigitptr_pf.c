/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigitptr_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-30 04:05:57 by ricky             #+#    #+#             */
/*   Updated: 2024-04-30 04:05:57 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigitptr_pf(unsigned long nbr, int base)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (nbr < (unsigned long)base)
		return (ft_putchar_pf(hex[nbr]));
	else
	{
		count = ft_putdigitptr_pf(nbr / base, base);
		return (count + ft_putdigitptr_pf(nbr % base, base));
	}
}
