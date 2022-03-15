/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_return.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:21:11 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/15 15:01:25 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_return(int nb)
{
	static int	cont;

	if (nb == 0)
		cont++;
	if (nb == 1)
		cont = 0;
	if (nb == -1)
		cont -= 1;
	return (cont);
}
