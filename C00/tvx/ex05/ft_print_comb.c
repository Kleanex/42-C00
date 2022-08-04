/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:06:05 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/14 18:44:42 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb(void)
{
	char	index[3];

	index[0] = 48;
	while (index[0] < 58)
	{
		index[1] = 48;
		while (index[1] < 58)
		{
			index[2] = 48;
			while (index[2] < 58)
			{
				if (index[0] != index[1] && index[0] != index[2] && index[1]
					 != index[2] && index[1] >= index[0] && index[2] >= index[0]
					 && index[2] >= index[1])
				{
					write (1, index, 3);
					if (index[0] != 55)
						write (1, ", ", 2);
				}
				index[2]++;
			}
			index[1]++;
		}
		index[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
