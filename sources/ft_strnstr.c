/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffarkas <ffarkas@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 03:31:39 by ffarkas           #+#    #+#             */
/*   Updated: 2023/01/14 03:40:55 by ffarkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0' || little == NULL)
		return ((char *) &big[i]);
	while (big[i] && len > i)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && j < len - i)
			{
				if (little[j + 1] == '\0')
					return ((char *) &big[i]);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
