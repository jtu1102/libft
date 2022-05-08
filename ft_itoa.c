/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:01:40 by soahn             #+#    #+#             */
/*   Updated: 2022/04/16 15:17:08 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*case_zero(void)
{
	char	*arr;

	arr = (char *)malloc(sizeof(char) * 2);
	arr[0] = '0';
	arr[1] = '\0';
	return (arr);
}

size_t	cnt_num(int n)
{
	size_t	cnt;

	cnt = 0;
	if (n < 0)
		cnt = 1;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	cnt;
	char	*arr;

	if (n == 0)
		return (case_zero());
	cnt = cnt_num(n);
	if (!(arr = (char *)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	arr[cnt] = '\0';
	if (n < 0)
		arr[0] = '-';
	while (n)
	{
		arr[cnt - 1] = ft_abs(n % 10) + '0';
		n /= 10;
		cnt--;
	}
	return (arr);
}
