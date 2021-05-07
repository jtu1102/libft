/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:44:25 by soahn             #+#    #+#             */
/*   Updated: 2021/05/06 07:43:43 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (!len || dst == src)
		return (dst);
	if (dst < src)
	{
		tmp_dst = (unsigned char *)dst;
		tmp_src = (unsigned char *)src;
		while (len--)
			*tmp_dst++ = *tmp_src++;
	}
	else
	{
		tmp_dst = (unsigned char *)dst + (len - 1);
		tmp_src = (unsigned char *)src + (len - 1);
		while (len--)
			*tmp_dst-- = *tmp_src--;
	}
	return (dst);
}
