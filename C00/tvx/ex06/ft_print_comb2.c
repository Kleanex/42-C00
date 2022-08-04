/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:26:20 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/18 10:37:27 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	printer(int nbr)
{
	ft_putchar(nbr / 10 + '0');
	ft_putchar(nbr % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	liste1;
	int	liste2;

	liste1 = -1;
	while (++liste1 <= 98)
	{
		liste2 = liste1;
		while (++liste2 <= 99)
		{
			printer (liste1);
			ft_putstr(" ");
			printer (liste2);
			if (liste1 != 98 || liste2 != 99)
				ft_putstr (", ");
		}
	}
}
