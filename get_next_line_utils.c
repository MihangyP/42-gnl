/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:57:56 by pmihangy          #+#    #+#             */
/*   Updated: 2024/03/14 13:22:48 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	has_line_break(char *str)
{
	int	i;

	if (NULL == str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	count_next_line_size(char *tmp)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (NULL == tmp)
		return (0);
	while (tmp[i])
	{
		if (tmp[i] == '\n')
		{
			count++;
			break ;
		}
		count++;
		i++;
	}
	return (count);
}

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		size;
	int		i;
	int		j;
	char	*str;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (NULL == str)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}
