/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:18:01 by soahn             #+#    #+#             */
/*   Updated: 2021/05/07 15:34:21 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			s_len;

	if (s == NULL)
		return (NULL);
	if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len <= start)
		*substr = '\0';
	else
		ft_strlcpy(substr, (char *)(s + start), len + 1);
	return (substr);
}
