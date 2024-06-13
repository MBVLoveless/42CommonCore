/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-30 04:34:51 by ricky             #+#    #+#             */
/*   Updated: 2024-04-30 04:34:51 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	start_state(t_State *state)
{
	state->buffer_size_copy = BUFFER_SIZE;
	state->bytes_read = 0;
	state->total_bytes = 0;
}

void	copy_buffer(char *src, char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

int	read_line(int fd, t_State *state)
{
	while (1)
	{
		state->bytes_read = read(fd, state->next_line + state->total_bytes, 1);
		if (state->bytes_read <= 0)
			break ;
		state->total_bytes += state->bytes_read;
		if (state->next_line[state->total_bytes - 1] == '\n')
			break ;
		if (state->total_bytes >= state->buffer_size_copy)
		{
			state->temp = malloc(1 * (2 * state->buffer_size_copy + 1));
			if (!state->temp)
			{
				free(state->next_line);
				return (-1);
			}
			copy_buffer(state->next_line, state->temp, state->total_bytes);
			free(state->next_line);
			state->next_line = state->temp;
			state->buffer_size_copy *= 2;
		}
	}
	return (0);
}

int	line_finish(t_State *state)
{
	if ((state->bytes_read == 0 && state->total_bytes == 0))
	{
		free(state->next_line);
		return (1);
	}
	if (state->bytes_read == -1)
	{
		free(state->next_line);
		return (1);
	}
	state->next_line[state->total_bytes] = '\0';
	return (0);
}
