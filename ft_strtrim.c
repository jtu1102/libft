/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:35:39 by soahn             #+#    #+#             */
/*   Updated: 2021/05/06 18:26:37 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	front;
	size_t	tail;

	res = NULL;
	if (s1 && set)
	{
		front = 0;
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		tail = ft_strlen(s1);
		while (s1[tail - 1] && ft_strchr(set, s1[tail - 1]) && tail != front)
			tail--;
		if (!(res = (char *)malloc(sizeof(char) * (tail - front + 1))))
			return (NULL);
		ft_strlcpy(res, s1 + front, tail - front + 1);
	}
	return (res);
}
