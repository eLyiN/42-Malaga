/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:11:11 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/17 18:27:14 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrcount(int c)
{
	int	i;
	int	signo;

	i = 0;
	signo = -1;
	if (c == 0)
	{
		return (1);
	}
	if (c > 0)
	{
		signo = 1;
		c = (c * -1);
	}
	while (c < 0)
	{
		c = c / 10;
		i++;
	}
	if (signo == -1)
	{
		return (i + 1);
	}
	else
		return (i);
}

char	*ft_zerominint(int n, char *str)
{
	char	*min_int;
	int		x;

	if (n == -2147483648)
	{
		min_int = "-2147483648";
		x = 0;
		while (x <= (int)ft_strlen(min_int))
		{
			str[x] = min_int[x];
			x++;
		}
		return (str);
	}
	else if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*fresh_str;
	int		i;

	i = ft_nbrcount(n);
	fresh_str = (char *)malloc(sizeof(char) * (i + 1));
	if (!fresh_str)
		return (NULL);
	if (n == -2147483648 || n == 0)
	{
		ft_zerominint(n, fresh_str);
		return (fresh_str);
	}
	fresh_str[i--] = '\0';
	if (n < 0)
	{
		fresh_str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		fresh_str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (fresh_str);
}
