/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percentage_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:02:32 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/11 14:04:52 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_percentage_p(int nbr)
{
	ft_putstr("0x");
	if (nbr == 0)
		ft_putchar('0');
	if (nbr >= 1)
		ft_putnbr_base(nbr, "0123456789abcdef");
}
