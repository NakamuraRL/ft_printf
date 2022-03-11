/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <grocha-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:37:08 by grocha-l          #+#    #+#             */
/*   Updated: 2022/03/11 15:54:25 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_after_percentage(va_list ap, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	if (c == 's')
		ft_putstr(va_arg(ap, char *));
	if (c == 'p')
		ft_percentage_p(va_arg(ap, int));
	if (c == 'd')
		ft_putnbr(va_arg(ap, int));
	if (c == 'i')
		ft_putnbr(va_arg(ap, int));
	if (c == 'u')
		ft_putnbr(va_arg(ap, unsigned int));
	if (c == 'x')
		ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	if (c == 'X')
		ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	if (c == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		cont;

	cont = 0;
	va_start(ap, str);
	while (str[cont] != '\0')
	{
		if (str[cont] == '%')
		{
			ft_after_percentage(ap, str[cont + 1]);
			cont += 2;
			continue ;
		}
		write(1, &str[cont], 1);
		ft_count_return();
		cont++;
	}
	va_end(ap);
	return (ft_count_return());
}

/*int main(void)
{
	int cont;
	int ret;
	int ret_2;
	char c;
	char *str;

	cont = 34;
	c = 'f';
	str = "uva";

	ret_2 = ft_printf("banana %c %s %p %d %i %u %x %X %%\n", c, str, cont, cont, cont, cont, cont, cont);
	ret = printf("banana %c %s %p %d %i %u %x %X %%\n", c, str, cont, cont, cont, cont, cont, cont);

	printf("%i\n", ret);
	printf("%i", ret_2);
}*/
