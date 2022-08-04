/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 06:22:56 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/23 06:38:03 by dosteine         ###   ########.fr       */
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

void	ft_print_combn(int n)
{
	int	liste[];

	if (n > 1)
	{		
		while (++liste[*n] <= 9)
		{
			liste[n-1] = 0;
			while (++liste[n-1] <= 9)
			{
				printer (liste[n]);
				printer (liste[n-1]);
				if (liste[n] != 9)
					ft_putstr (", ");
		}
	}
}

int main(void)
{
	ft_print_combn(3);
}
