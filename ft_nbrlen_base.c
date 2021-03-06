/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 16:00:08 by framel            #+#    #+#             */
/*   Updated: 2016/05/27 16:04:04 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen_base(long int nbr, int base)
{
	int len;

	len = nbr > 0 ? 0 : 1;
	while (nbr)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
