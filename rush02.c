/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:38:01 by glopes-a          #+#    #+#             */
/*   Updated: 2025/08/03 09:33:35 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	countx;
	int	county;

	countx = 0;
	county = 0;
	while (county < y)
	{
		countx = 0;
		while (countx < x)
		{
			if (county == 0 && (countx == 0 || countx == x - 1))
				ft_putchar('A');
			else if (county == 0)
				ft_putchar('B');
			else if (county == y - 1 && (countx == 0 || countx == x - 1))
				ft_putchar('C');
			else if (county == y - 1 || countx == 0 || countx == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			countx++;
		}
		ft_putchar('\n');
		county++;
	}
}
