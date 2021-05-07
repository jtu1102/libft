/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:25:57 by soahn             #+#    #+#             */
/*   Updated: 2021/05/04 18:33:18 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	i;

	if (!(ptr = malloc(size * num)))
		return (NULL);
	i = 0;
	while (i < size * num)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
