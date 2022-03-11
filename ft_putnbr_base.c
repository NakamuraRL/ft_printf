/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:01:03 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/11 15:39:47 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_return(char *base, int n[50], int nbr)
{
	int	cont;

	cont = 0;
	while (nbr != 0)
	{
		nbr = nbr / ft_strlen(base);
		cont++;
	}
	while (cont >= 0)
	{
		write(1, &base[n[cont]], 1);
		ft_count_return();
		cont--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	cont;
	int	new_nbr[50];
	int	temp;

	cont = 0;
	temp = nbr;
	if (nbr == -2147483648)
		return (ft_putnbr_base(-2147, base), ft_putnbr_base(483648, base));
	while (cont < 50)
		new_nbr[cont++] = -1;
	if (nbr < 0)
	{
		write (1, "-", 1);
		ft_count_return();
		nbr *= -1;
	}
	cont = 0;
	while (nbr > 0)
	{
		new_nbr[cont] = nbr % ft_strlen(base);
		nbr /= ft_strlen(base);
		cont++;
	}
	ft_return(base, new_nbr, temp);
}
