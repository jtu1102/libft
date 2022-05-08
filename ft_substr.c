/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:18:01 by soahn             #+#    #+#             */
/*   Updated: 2022/04/16 15:22:01 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			s_len;

	if (s == NULL)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len <= start)
		*substr = '\0';
	else
		ft_strlcpy(substr, (char *)(s + start), len + 1);
	return (substr);
}
