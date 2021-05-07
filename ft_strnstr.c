/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:26:27 by soahn             #+#    #+#             */
/*   Updated: 2021/05/04 16:30:07 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_len;
	size_t	l_len;
	size_t	i;

	if (!little[0])
		return ((char *)big);
	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	if (!(b_len < l_len || len < l_len))
	{
		i = 0;
		while (i + l_len <= len)
		{
			if (big[i] == little[0] && !(ft_strncmp((big + i), little, l_len)))
				return ((char *)(big + i));
			i++;
		}
	}
	return (NULL);
}
