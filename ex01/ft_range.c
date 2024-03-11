/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:28:36 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 18:54:47 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (0);

	arr = (int *)malloc((max - min + 1) * sizeof(int));

	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	arr[i] = '\0';

	free(arr);
	
	return (arr);
}

// int	main(void)
// {
// 	int		min;
// 	int		max;
// 	int		*arr;
// 	int		i;

// 	min = 10;
// 	max = 15;
// 	arr = ft_range(min, max);
// 	i = 0;
// 	while (arr[i] != '\0')
// 	{
// 		printf("[%d]:%d, ", i, arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
