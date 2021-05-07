/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:51:35 by soahn             #+#    #+#             */
/*   Updated: 2021/05/04 18:21:38 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_charnb(int nb, int fd)
{
	char	charnb;

	if (nb < 0)
		nb = -(nb % 10);
	else
		nb = nb % 10;
	charnb = nb + 48;
	write(fd, &charnb, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n > -10 && n < 10)
	{
		if (n < 0)
			write(fd, "-", 1);
		print_charnb(n, fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	print_charnb(n, fd);
}
