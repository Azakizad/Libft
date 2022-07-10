/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:19:32 by azakizad          #+#    #+#             */
/*   Updated: 2022/07/05 21:09:37 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	*next;
	char		*buffer;
	char		*line;
	int			reader;

	buffer = (char *) malloc (BUFFER_SIZE + 1);
	if (next)
	{
		line = ft_strdup(next);
		free (next);
		next = NULL;
	}
	else
		line = ft_strdup("");
	reader = 1;
	if (bs(&buffer, &line, fd, &reader) == NULL)
		return (NULL);
	next = save_the_rest(line, next);
	line = return_line(line);
	free(buffer);
	return (line);
}

char	*save_the_rest(char *str, char *rest)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str[j] != '\0')
		j++;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (i != j)
		rest = ft_substr(str, i + 1, j - (i + 1));
	else
		rest = ft_strdup("");
	return (rest);
}

char	*return_line(char *str)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str[j] != '\0')
		j++;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (i != j)
	{
		ret = ft_substr(str, 0, i + 1);
		free (str);
		str = ft_strdup(ret);
		free (ret);
	}
	return (str);
}

char	*read_the_line(char	**buffer, char	**line, int fd, int *reader)
{
	*reader = read(fd, *buffer, BUFFER_SIZE);
	if ((*reader == 0 && (*line)[0] == '\0') || *reader == -1)
	{
		free(*line);
		return (NULL);
	}
	buffer[0][*reader] = '\0';
	*line = ft_strjoin(*line, *buffer);
	return (*line);
}

char	*bs(char **buffer, char **line, int fd, int *reader)
{
	while (!(ft_strchr(*line, '\n')) && *reader != 0)
	{
		if (read_the_line(&(*buffer), &(*line), fd, reader) == NULL)
		{
			free(*buffer);
			return (NULL);
		}
	}
	return (*line);
}
