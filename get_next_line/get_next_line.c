/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricky <ricky@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 09:28:26 by ricky             #+#    #+#             */
/*   Updated: 2024-04-16 09:28:26 by ricky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char        *next_line;
    size_t      buffer_size_copy;
    ssize_t      bytes_read;
    size_t      total_bytes;
    char        *temp;
    size_t      i;

    buffer_size_copy = BUFFER_SIZE;
    bytes_read = 0;
    total_bytes = 0;
    i = 0;
    next_line = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if(!next_line)
        return (NULL);
    while ((bytes_read = read(fd, next_line + total_bytes, 1)) > 0)
    {
        total_bytes += bytes_read;
        if (next_line[total_bytes - 1] == '\n')
            break;
        if (total_bytes >= buffer_size_copy)
        {
            temp = malloc(sizeof(char) * (2 * buffer_size_copy + 1));
            if (!temp)
            {
                free(next_line);
                return (NULL);
            }
            while (i < total_bytes)
            {    
                temp[i] = next_line[i];
                i++;
            }
            free(next_line);
            next_line = temp;
            buffer_size_copy *= 2;
        }
    }
    if (bytes_read == -1)
    {
        free(next_line);
        return (NULL);
    }
    next_line[total_bytes] = '\0';
    return(next_line);
}
