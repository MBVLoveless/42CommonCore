/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 09:58:47 by ricky             #+#    #+#             */
/*   Updated: 2024-04-24 09:58:47 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *str)
{
	int	index;

	if (!str)
		str = "(null)";
	index = -1;
	while (str[++index])
	{
		write(1, &str[index], 1);
	}
	return (index);
}
