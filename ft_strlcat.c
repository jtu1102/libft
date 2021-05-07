/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:30:53 by soahn             #+#    #+#             */
/*   Updated: 2021/05/06 13:38:01 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_size;

	if (size == 0)
		return (ft_strlen(src));
	dest_size = ft_strlen(dest);
	if (size < dest_size)
		return (ft_strlen(src) + size);
	i = dest_size;
	j = 0;
	while (src[j] && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ft_strlen(src) + dest_size);
}
