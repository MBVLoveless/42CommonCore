/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:58:01 by ricky             #+#    #+#             */
/*   Updated: 2024/04/12 12:20:40 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*p;

	if (count == 2147483647 || size == 2147483647)
		return (0);
	if (count < 0 || size < 0)
		return (0);
	i = count * size;
	if (i / size != count && i / count != size)
		return (0);
	p = malloc(i);
	if (!p)
		return (0);
	else
		ft_bzero(p, i);
	return (p);
}

/* if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	} */

/* if (count == -2147483648 || size == -2147483648)
	return (0); */
