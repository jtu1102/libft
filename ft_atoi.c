/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:03:42 by soahn             #+#    #+#             */
/*   Updated: 2021/05/04 14:59:01 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	return (i);
}

int		ten_power(int i)
{
	int	res;

	res = 1;
	while (i--)
		res *= 10;
	return (res);
}

int		ft_atoi(char *str)
{
	int		sign;
	int		i;
	int		result;
	int		p_idx;

	sign = 1;
	result = 0;
	i = ft_isspace(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	p_idx = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (p_idx < i)
	{
		result += ((str[p_idx] - '0') * ten_power(i - p_idx - 1));
		p_idx++;
	}
	return (sign * result);
}
