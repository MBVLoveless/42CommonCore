/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:16:14 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/04/17 17:31:56 by rsa-varg         ###   ########.fr       */
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

static char	**ft_create_split(char **array, char const *s, char c)
{
	int	x;
	int	end;
	int	begin;
	int	arg;

	x = 0;
	end = 0;
	begin = 0;
	arg = -1;
	while (++arg < ft_word_count(s, c))
	{
		while (s[x] == c && s[x++] != '\0')
		{
			end++;
			begin++;
		}
		while (s[x] != c && s[x++] != '\0')
			end++;
		array[arg] = ft_strndup(s, begin, end);
		x++;
		end++;
		begin = x;
	}
	array[arg] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char			**new;

	if (!s)
		return (NULL);
	new = malloc((sizeof(char *) * (ft_word_count(s, c) + 1)));
	if (!new)
		return (0);
	new = ft_create_split(new, s, c);
	return (new);
}

/* int	main(void)
{
	char	**tabstr;
	int		i;

	i = 0;
	tabstr = ft_split("this is a string     test       ", 'i');
		while (tabstr[i])
		{
			ft_putstr_fd(tabstr[i], 1);
			write(1, "\n", 1);
			i++;
		}
}

int	ft_count_words(const char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	ft_free_str_array(char **str_array)
{
	size_t	i;

	i = 0;
	while (str_array[i])
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
}

static char	**ft_split_internal(char const *s, char c, size_t wc)
{
	char		**res;
	size_t		i;
	const char	*end;

	i = 0;
	res = (char **)ft_calloc(wc + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (i < wc)
	{
		while (*s == c)
			s++;
		end = ft_strchr(s, c);
		if (!end)
			end = s + ft_strlen(s);
		res[i] = ft_substr(s, 0, end - s);
		if (!res[i])
		{
			ft_free_str_array(res);
			return (NULL);
		}
		s = end;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;

	if (!s)
		return (NULL);
	wc = ft_count_words(s, c);
	return (ft_split_internal(s, c, wc));
} */
