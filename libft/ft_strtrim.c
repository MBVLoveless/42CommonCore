/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:10:30 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/12 12:25:13 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;

	new = NULL;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		new = malloc(sizeof(char) * (j - i + 1));
		if (!new)
			return (0);
		ft_strlcpy(new, &s1[i], j - i + 1);
	}
	return (new);
}
