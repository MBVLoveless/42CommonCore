/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:03:22 by ricky             #+#    #+#             */
/*   Updated: 2024/05/23 13:14:45 by rsa-varg         ###   ########.fr       */
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
