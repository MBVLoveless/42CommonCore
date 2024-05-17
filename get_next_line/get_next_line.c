/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-30 04:35:57 by ricky             #+#    #+#             */
/*   Updated: 2024-04-30 04:35:57 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_State	state;

	start_state(&state);
	state.next_line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!state.next_line)
		return (0);
	if (read_line(fd, &state) == -1)
		return (0);
	if (line_finish(&state) == 1)
		return (0);
	return (state.next_line);
}
