/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 07:34:47 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/19 06:51:55 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	pnb;
	char	tempo;

	pnb = nb;
	if (pnb < 0)
	{
		pnb *= -1;
		ft_putchar('-');
	}
	if (pnb > 9)
		ft_putnbr(pnb / 10);
	tempo = '0' + (char)(pnb % 10);
	ft_putchar(tempo);
}
/*
int	main(void)
{
	ft_putnbr(-105);
	return (0);
}
*/
