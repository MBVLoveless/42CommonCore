/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:17:48 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/12 12:21:12 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_int(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count ++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;

	count = ft_count_int(n);
	result = malloc(sizeof(char) * count + 1);
	if (!result)
		return (0);
	result[count] = '\0';
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (n > 9)
	{
		count--;
		result[count] = (n % 10) + 48;
		n = n / 10;
	}
	if (n <= 9)
	{
		count--;
		result[count] = n + 48;
	}
	return (result);
}

/* int	main(void)
{
	int i = -1235868;
	char *str = ft_itoa(i);
	printf("%s\n", str);
	return (0);
} */
