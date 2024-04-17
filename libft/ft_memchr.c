/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:01:42 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/17 12:05:32 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		*p;
	size_t		i;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}

/* int main(void)
{
    char    src[] = "palavra";
    char    *new = ft_memchr(src, 'v', 2);
    if (!new)
        printf("Not found.\n");
    else
        printf("Character found: %c\n", *new);
    return (0);
} */
