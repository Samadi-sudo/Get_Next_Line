/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abantari <abantari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:08:51 by abantari          #+#    #+#             */
/*   Updated: 2025/11/25 16:08:51 by abantari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>


//get_next_line
char	*get_next_line(int fd);

// utils
size_t	ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *buff, char *saved);
char	*ft_strdup(const char *s);


//get_next_line_bonus

//utils_bonus

#endif
