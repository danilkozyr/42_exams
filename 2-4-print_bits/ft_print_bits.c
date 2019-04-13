/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-4-print_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 14:53:56 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/16 14:53:57 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(unsigned char octet)
{
	int	oct;
	int	div;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}
