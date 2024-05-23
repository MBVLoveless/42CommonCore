/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:50:39 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/05/23 16:36:23 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	strlen;
	size_t	end;		

	if (!s)
		return (0);
	end = 0;
	strlen = ft_strlen(s);
	if (strlen < start)
		return (ft_strdup(""));
	if (strlen > start)
		end = strlen - start;
	if (end > len)
		end = len;
	sub = malloc(sizeof(char) * (end + 1));
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, end + 1);
	return (sub);
}
