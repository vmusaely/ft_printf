/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:22:19 by vmusaely          #+#    #+#             */
/*   Updated: 2021/02/05 16:22:21 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int s, int fd)
{
	char *s1;
	char *s2;

	s1 = ft_itoa(s);
	s2 = s1;
	while (s1[0])
	{
		write(fd, s1, 1);
		s1++;
	}
	free(s2);
}