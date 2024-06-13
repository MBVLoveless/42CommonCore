/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 10:03:22 by ricky             #+#    #+#             */
/*   Updated: 2024-04-24 10:03:22 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(void *ptr)
{
	int				count;
	unsigned long	ptr_add;

	ptr_add = (unsigned long)ptr;
	count = 0;
	count += ft_putstr_pf("0x");
	count += ft_putdigitptr_pf(ptr_add, 16);
	return (count);
}
