/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:11:55 by pmihangy          #+#    #+#             */
/*   Updated: 2024/03/14 13:22:09 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*insert_in_tmp_str(char *tmp_str, char *str, int fd);
char	*extract_str_line(char *tmp);
char	*update_tmp_str(char *str);
int		has_line_break(char *str);
int		count_next_line_size(char *tmp);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char const *s2);

#endif
