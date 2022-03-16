/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:30:46 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/16 13:34:05 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char *base)
{
	int	i;

	i = 0;
	if (nb > 15)
	{
		i += ft_puthex((nb / 16), base);
		i += ft_puthex((nb % 16), base);
	}
	else
		i += ft_putchar(base[nb]);
	return (i);
}
