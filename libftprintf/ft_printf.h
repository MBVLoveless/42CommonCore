/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 09:51:55 by ricky             #+#    #+#             */
/*   Updated: 2024-04-24 09:51:55 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_pf(int c);
int		ft_putstr_pf(char *str);
int		ft_putptr_pf(void *ptr);
int		ft_putnbr_pf(int nbr);
int		ft_format(char specifier, va_list *lst);
int		ft_isalpha(int arg);
int		ft_putdigit_pf(long nbr, int base);
int		ft_putdigitupper_pf(long nbr, int base);
int		ft_putdigitptr_pf(unsigned long nbr, int base);

#endif
