/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:58:01 by ricky             #+#    #+#             */
/*   Updated: 2024/05/23 15:58:57 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*i;

	if (count == 2147483647 || size == 2147483647)
		return (0);
	if (count == 0 || size == 0)
	{
		i = malloc(0);
		if (!i)
			return (0);
		return (i);
	}
	if ((count * size) / size != count && (count * size) / count != size)
		return (0);
	i = malloc(count * size);
	if (!i)
		return (0);
	ft_bzero(i, (count * size));
	return (i);
}
