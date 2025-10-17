/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:36:59 by bbosnak           #+#    #+#             */
/*   Updated: 2025/10/17 08:04:51 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	pn;

	pn = 1;
	i = 0;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pn = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= '9' && str[i])
	{
		res = (str[i] - 48) + (res * 10);
		i++;
	}
	return (pn * res);
}
