/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffarkas <ffarkas@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 04:37:16 by ffarkas           #+#    #+#             */
/*   Updated: 2023/01/14 04:43:50 by ffarkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, n * size);
	return (p);
}
