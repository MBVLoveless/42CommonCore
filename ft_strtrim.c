#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		new = malloc(sizeof(char) * (j - i + 1));
		if (!new)
			return (0);
		else
			ft_strlcpy(new, &s1[i], j - i + 1);
	}
	return (new);
}
