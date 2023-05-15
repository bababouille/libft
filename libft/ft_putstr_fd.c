/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:52:34 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 19:53:39 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

// int main(void)
// {
// 	char	*string = "Hello, Bitch!";
// 	int	fd = 1; 
// 	ft_putstr_fd(string, fd);
// 	close(fd);
// 	return 0;
// }
