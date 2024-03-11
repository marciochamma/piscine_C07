/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:29:46 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/22 13:53:51 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);

	*range = (int *)malloc(((max - min) + 1) * sizeof(int));
	if (!range)
		return (-1);

	i = 0;
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int		*range;
// 	int		min;
// 	int		max;

// 	min = 10;
// 	max = 15;

// 	printf("%d",ft_ultimate_range(&range, min, max));

// 	return (0);
// }
