/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:35:22 by ebouther          #+#    #+#             */
/*   Updated: 2015/11/30 13:39:39 by ebouther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int n)
{
	int	i;

	i = 0;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (0);
}
