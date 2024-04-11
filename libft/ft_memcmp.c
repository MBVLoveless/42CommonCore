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

#include <libft.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char			*strc1;
	char			*strc2;
	size_t			i;

	strc1 = (char *) str1; //test with both ways
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



/* int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
} */