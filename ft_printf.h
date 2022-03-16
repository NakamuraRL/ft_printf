/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:20:22 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/16 13:35:45 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_strlen(char *str);
int		ft_count_return(int nb);
int		ft_uns_putnbr(unsigned int nb);
int		ft_putchar(char c);
int		ft_puthex(unsigned int nb, char *base);
void	ft_after_percentage(va_list ap, char c);
void	ft_return(char *base, int n[50], long unsigned nbr);
void	ft_putnbr_base(long unsigned nbr, char *base);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_percentage_p(long unsigned nbr);

#endif
