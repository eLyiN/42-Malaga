/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 08:21:26 by aarribas          #+#    #+#             */
/*   Updated: 2022/06/02 18:21:13 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strfresh(const char *str)
{
	char	*fresh;

	if (str)
	{
		fresh = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
		if (!fresh)
			return (NULL);
		ft_memset(fresh, '\0', (ft_strlen(str) + 1));
		return (fresh);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + (ft_strlen(s2)
						+ 1)));
		if (!new_str)
			return (NULL);
		i = 0;
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			new_str[i++] = s2[j++];
		}
		new_str[i] = '\0';
		return (new_str);
	}
	return (NULL);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	ft_newline(char *mybuffer)
{
	if (!mybuffer)
		return (0);
	while (*mybuffer)
	{
		if (*mybuffer == '\n')
			return (1);
		mybuffer++;
	}
	return (0);
}
