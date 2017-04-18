/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:59:11 by framel            #+#    #+#             */
/*   Updated: 2015/12/08 16:26:20 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
	}
	return (0);
}
