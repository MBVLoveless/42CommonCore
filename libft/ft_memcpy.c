/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:31 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/09 13:48:06 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = src;
	while (n > 0)
	{
		*d = s;
		d++;
		s++;
	}
	return (dest);
}
