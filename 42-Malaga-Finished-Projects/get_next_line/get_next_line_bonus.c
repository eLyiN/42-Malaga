/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:07:35 by aarribas          #+#    #+#             */
/*   Updated: 2022/06/02 18:07:38 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*mybuffer[1023];
	char		*process;
	char		*buff;
	char		*temp;

	temp = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	mybuffer[fd] = ft_read(fd, buff, mybuffer[fd], temp);
	if (!mybuffer[fd])
		return (NULL);
	process = ft_line(mybuffer[fd]);
	mybuffer[fd] = ft_rest(mybuffer[fd]);
	return (process);
}

char	*ft_read(int fd, char *buff, char *mybuffer, char *temp)
{
	int	size_read;

	size_read = 1;
	while (size_read != 0)
	{
		size_read = read(fd, buff, BUFFER_SIZE);
		if (size_read == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[size_read] = '\0';
		temp = mybuffer;
		if (!temp)
		{
			temp = malloc(sizeof(char) * 1);
			temp[0] = '\0';
		}
		mybuffer = ft_strjoin(temp, buff);
		free(temp);
		if (ft_newline(mybuffer) == 1)
			break ;
	}
	free(buff);
	return (mybuffer);
}

char	*ft_line(char *mybuffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!mybuffer)
		return (NULL);
	while (mybuffer[i] != '\n' && mybuffer[i])
		i++;
	if (mybuffer[0] == '\0')
		return (NULL);
	line = malloc(sizeof(char) * i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (mybuffer[i] != '\n' && mybuffer[i])
	{
		line[i] = mybuffer[i];
		i++;
	}
	if (mybuffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_rest(char *mybuffer)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(mybuffer);
	if (!mybuffer)
		return (NULL);
	while (mybuffer[i] != '\n' && mybuffer[i])
		i++;
	if (mybuffer[i] == '\0')
	{
		free(mybuffer);
		return (NULL);
	}
	rest = malloc(sizeof(char) * (j - i));
	if (!rest)
		return (NULL);
	i++;
	j = 0;
	while (mybuffer[i])
		rest[j++] = mybuffer[i++];
	rest[j] = '\0';
	free(mybuffer);
	return (rest);
}
