/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:44:16 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/04 07:41:55 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if (size == 0)
		return (src_len);
	while ((dst_len + i) < (size - 1) && src[i])
	{
		dst[j + i] = (char)src[i];
		i++;
	}
	dst[j + i] = '\0';
	if (size > dst_len)
		return (dst_len + src_len);
	else
		return (src_len + size);
	return (size + src_len);
}
