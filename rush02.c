/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:38:01 by glopes-a          #+#    #+#             */
/*   Updated: 2025/08/02 17:46:48 by glopes-a         ###   ########.fr       */
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
			// linha 1 imprime 'A' na primeira e ultima posicao
			if (county == 0 && (countx == 0 || countx == x - 1))
				ft_putchar('A');
			// linha 1 imprime 'B' quando percorrer pelo meio
			else if (county == 0)
				ft_putchar('B');
			// ultima linha imprime 'C' na primeira e ultima posicao
			else if (county == y - 1 && (countx == 0 || countx == x - 1))
				ft_putchar('C');
			// ultima linha no meio
			else if (county == y - 1)
				ft_putchar('B');
			// linha do meio na primeira e ultima posição
			else if (countx == 0 || countx == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			countx++;
		}
		// quebra linha cada vez que o programa percorre uma linha completa
		ft_putchar('\n');
		county++;
	}
}
