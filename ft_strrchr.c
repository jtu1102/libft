/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:24:09 by soahn             #+#    #+#             */
/*   Updated: 2021/05/04 19:22:39 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen(str);
	ptr = (char *)str;
	if ((char)c == '\0')
		return (ptr + i);
	while (i > 0)
	{
		if (ptr[i - 1] == (char)c)
			return (ptr + i - 1);
		i--;
	}
	return (NULL);
}
