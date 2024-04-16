/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:16:14 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/12 15:38:09 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*ft_strndup(const char *str, int begin, int end)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(*str) * (end - begin + 1));
	if (!new)
		return (0);
	while (str[begin] && begin < end)
	{
		new[i] = str[begin];
		i++;
		begin++;
	}
	new[i] = '\0';
	return (new);
}

static char	**ft_create_split(char **array, char const *s, char c, int arg)
{
	int	x;
	int	end;
	int	begin;

	x = 0;
	end = 0;
	begin = 0;
	while (arg < ft_word_count(s, c))
	{
		while (s[x] == c && s[x++])
		{
			end++;
			begin++;
		}
		while (s[x] != c && s[x++])
			end++;
		array[arg] = ft_strndup(s, begin, end);
		x++;
		arg++;
		end++;
		begin = x;
	}
	array[arg] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char			**new;
	int				arg;

	arg = 0;
	new = malloc(sizeof (char *) * ft_word_count(s, c) + 1);
	if (!new)
		return (0);
	new = ft_create_split(new, s, c, arg);
	return (new);
}
