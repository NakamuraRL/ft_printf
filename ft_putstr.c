/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:59:22 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/16 10:58:25 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	char	x;
	int		cont;

	cont = 0;
	x = '0';
	if (str == NULL)
	{
		write(1, "(null)", 6);
		ft_count_return(6);
		return ;
	}
	while (str[cont] != '\0')
	{
		x = str[cont];
		write(1, &x, 1);
		ft_count_return(0);
		cont++;
	}
}
