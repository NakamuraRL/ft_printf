/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:20:22 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/11 15:32:04 by grocha-l         ###   ########.fr       */
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
int		ft_count_return(void);	
void	ft_after_percentage(va_list ap, char c);
void	ft_return(char *base, int n[50], int nbr);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_percentage_p(int nbr);

#endif
