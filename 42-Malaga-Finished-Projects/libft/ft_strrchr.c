/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:31:00 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/17 19:47:34 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*point;
	int		count;

	point = (char *)str;
	count = 0;
	if (c == '\0')
		return (point + ft_strlen(str));
	if (*point != '\0')
	{
		while (point[count])
		{
			count++;
		}
		while (count >= 0)
		{
			if (point[count] == (char)c)
			{
				return (point + count);
			}
			count--;
		}
	}
	return (NULL);
}
