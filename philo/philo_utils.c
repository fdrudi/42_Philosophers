/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrudi <fdrudi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:27:31 by fdrudi            #+#    #+#             */
/*   Updated: 2022/03/31 12:08:25 by fdrudi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	long_max(int j, int x)
{
	int	y;

	y = 0;
	if (j >= 19 && x == 1)
		y = -1;
	if (j >= 19 && x == -1)
		y = 0;
	return (y);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	y;
	int	j;

	y = 0;
	x = 1;
	j = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			x *= -1;
		str++;
	}
	while (*str <= 57 && *str >= 48)
	{
		y = (y * 10) + ((*str - 48) % 10);
		str++;
		j++;
	}
	y *= x;
	if (j >= 19)
		return (long_max(j, x));
	return (y);
}
