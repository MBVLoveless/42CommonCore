/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:17:48 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/17 15:33:34 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_int(int n)
{
	int		count;
	long	z;

	count = 0;
	z = n;
	if (z < 0)
	{
		z *= -1;
		count ++;
	}
	while (z > 0)
	{
		z = z / 10;
		count++;
	}
	return (count);
}

static void	ft_negative(long *q, char *result)
{
	*q *= -1;
	*result = '-';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	long	q;

	q = n;
	if (n == 0)
	{
		result = malloc(sizeof(char *));
		result[0] = '0';
		return (result);
	}
	count = ft_count_int(n);
	result = malloc(sizeof(char) * (count) + 1);
	if (!result)
		return (0);
	result[count] = '\0';
	if (q < 0)
		ft_negative(&q, result);
	while (q > 0)
	{
		count--;
		result[count] = q % 10 + 48;
		q = q / 10;
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

/* 	while (n > 9)
	{
		count--;
		result[count] = (n % 10) + 48;
		n = n / 10;
	}
	if (n <= 9)
		result[--count] = n + 48; */
