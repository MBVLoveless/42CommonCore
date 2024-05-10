/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 08:56:48 by ricky             #+#    #+#             */
/*   Updated: 2024-04-24 08:56:48 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char specifier, va_list *lst)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_pf(va_arg(*lst, int));
	else if (specifier == 's')
		count += ft_putstr_pf(va_arg(*lst, char *));
	else if (specifier == 'p')
		count += ft_putptr_pf(va_arg(*lst, void *));
	else if (specifier == 'd')
		count += ft_putdigit_pf(va_arg(*lst, int), 10);
	else if (specifier == 'i')
		count += ft_putdigit_pf(va_arg(*lst, int), 10);
	else if (specifier == 'u')
		count += ft_putdigit_pf(va_arg(*lst, unsigned int), 10);
	else if (specifier == 'x')
		count += ft_putdigit_pf(va_arg(*lst, unsigned int), 16);
	else if (specifier == 'X')
		count += ft_putdigitupper_pf(va_arg(*lst, unsigned int), 16);
	else if (specifier == '%')
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	size_t	count;
	va_list	lst;

	if (!str)
		return (0);
	count = 0;
	va_start(lst, str);
	while (*str)
	{
		if (*str == '%')
			count += ft_format(*++str, &lst);
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(lst);
	return (count);
}

/* int	ft_printf(const char *str, ...)
{
	size_t	count;
	va_list	lst;
	size_t	char_consumed;

	if (!str)
		return (0);
	va_start(lst, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			char_consumed = ft_format(lst, (char *)str, &count);
			str += char_consumed;
		}
		else
		{
			ft_putchar_pf(*str, &count);
			str++;
		}
	}
	va_end(lst);
	return (count);
} */
