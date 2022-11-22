/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:32:31 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/02 19:28:45 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La funcion de bzero escribe cero bites (aka '\0') en el string de s. Si el 
 * string no contiene longitud o el valor de n es igual a 0,
 * la funcion no debería de realizar nada.*/

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}
