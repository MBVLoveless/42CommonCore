/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 09:29:38 by ricky             #+#    #+#             */
/*   Updated: 2024-04-16 09:29:38 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_State
{
	char	*next_line;
	size_t	buffer_size_copy;
	ssize_t	bytes_read;
	size_t	total_bytes;
	char	*temp;
}	t_State;

char	*get_next_line(int fd);
void	start_state(t_State *state);
void	copy_buffer(char *src, char *dest, size_t size);
int		read_line(int fd, t_State *state);
int		line_finish(t_State *state);

#endif
