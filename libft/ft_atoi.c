/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:27:15 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/19 18:36:53 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int	i;
	int	add;
	int	sub;

	i = 0;
	add = 0;
	sub = 1;
	while (string[i] == ' ' || (string[i] >= '\t' && string[i] <= '\r'))
		i++;
	if (string[i] == '-' || string[i] == '+')
	{
		if (string[i] == '-')
			sub *= -1;
		i++;
	}
	while (string[i] >= 48 && string[i] <= 57)
	{
		add = add * 10;
		add = add + (string[i] - '0');
		i++;
	}
	return (add * sub);
}
