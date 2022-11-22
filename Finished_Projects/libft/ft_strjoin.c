/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:55:54 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/04 07:46:06 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
