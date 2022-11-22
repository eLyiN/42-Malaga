/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 09:25:09 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/14 14:11:38 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n1;

	n1 = n;
	if (n < 0)
	{
		n1 = (n1 * -1);
		write(fd, "-", 1);
	}
	if (n1 > 9)
	{
		ft_putnbr_fd(n1 / 10, fd);
		ft_putchar_fd((n1 % 10) + '0', fd);
	}
	else
		ft_putchar_fd((n1 % 10) + '0', fd);
}
