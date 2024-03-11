/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:21:02 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 18:51:52 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*copy;
	int		i;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	src_size += 1;
	
	copy = (char *)malloc(src_size * sizeof(char));
	if (copy == 0)
		return (0);
	
	
	i = 0;
	while (i < src_size)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

int	main(void)
{
	char	*src;

	src = "Salve o Corinthians!";
	printf("Original: %s\n", src);
	printf("Copia: %s\n", ft_strdup(src));
	return (0);
}
