/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abantari <abantari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:08:32 by abantari          #+#    #+#             */
/*   Updated: 2025/11/25 16:08:32 by abantari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char	*saved = NULL;
	char	*buff;
	ssize_t	state;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	if(!saved)
		buff = malloc(BUFFER_SIZE + 1);
	if(!saved)
		return (NULL);
	state = read(fd , buff, BUFFER_SIZE);
	if (state <= 0)
		return (NULL);
	buff[state] = '\0';
	saved = ft_strjoin(buff, saved);
}

