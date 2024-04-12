/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:20:48 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/12 13:13:13 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		x;

	i = -1;
	x = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (0);
	while (++i < ft_strlen(s1))
	{
		new[x] = s1[i];
		x++;
	}
	i = -1;
	while (++i < ft_strlen(s2))
	{
		new[x] = s2[i];
		x++;
	}
	new[x] = '\0';
	return (new);
}
