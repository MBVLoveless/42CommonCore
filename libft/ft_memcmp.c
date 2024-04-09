/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:13:01 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/09 15:24:03 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(void *str1, void *str2, unsigned int n)
{
	char			*strc1;
	char			*strc2;
	unsigned int	i;

	strc1 = str1;
	strc2 = str2;
	i = 0;
	while (i < n)
	{
		if (strc1 != strc2)
			return (strc1 - strc2);
		strc1++;
		strc2++;
		i++;
	}
	return (0);
}
