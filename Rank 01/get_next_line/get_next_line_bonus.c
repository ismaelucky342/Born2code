/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:25:43 by ismherna          #+#    #+#             */
/*   Updated: 2024/03/12 14:45:05 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <limits.h>

char	*ft_strchr(char *str, int c)
{
	unsigned char	b;
	int				i;

	b = (unsigned char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == b)
			return ((char *)&str[i]);
		i++;
	}
	if (b == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

static char	*ft_set_line(char *line_buffer)
{
	char		*left_c;
	ssize_t		i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	left_c = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*left_c == 0)
	{
		free(left_c);
		left_c = NULL;
	}
	line_buffer[i + 1] = 0;
	return (left_c);
}

static char	*ft_fill_line_buffer(int fd, char *left_c, char *buffer)
{
	ssize_t	b_read;
	char	*tmp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(left_c);
			return (NULL);
		}
		else if (b_read == 0)
			break ;
		buffer[b_read] = 0;
		if (!left_c)
			left_c = ft_strdup("");
		tmp = left_c;
		left_c = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left_c);
}

char	*get_next_line(int fd)
{
	static char	*left_c[OPEN_MAX];
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(left_c[fd]);
		free(buffer);
		buffer = NULL;
		left_c[fd] = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = ft_fill_line_buffer(fd, left_c[fd], buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (left_c[fd] = NULL, NULL);
	left_c[fd] = ft_set_line(line);
	return (line);
}
