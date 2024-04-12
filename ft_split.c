#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* void	ft_free_split(char **array)
{
	int	i;
	i = -1;
	if (array == 0)
		return;
	while (array[++i] != NULL)
		free(array[i]);
	free(array);
} */

char	**ft_split(char const *s, char c)
{
	char	**new;
	int	i;
	int	n;
	int	arg;
	int	temp;

	i = 0;
	arg = 0;
	new = (char **)malloc(sizeof(char *) * (strlen(s) + 1));
	if (!new)
		return (0);
	while (s[i])
	{
		n = 0;
		temp = i;
		while (s[temp] != c && s[temp])
			temp++;
		new[arg] = (char *)malloc(sizeof(char) * (temp - i + 1));
		if (!new[arg])
			return (0);
		while (s[i] != c && s[i])
			new[arg][n++] = s[i++];
		new[arg][n] = '\0';
		arg++;
	}
	new[arg] = NULL;
	return (new);
}

int	main(void)
{
	char	*str = "this is the split function";
	char	**array = ft_split(str, ' ');
	int	i = 0;
	while(array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
	i = 0;
	while(array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}
