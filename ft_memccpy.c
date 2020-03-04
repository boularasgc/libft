/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 09:09:19 by mboulara          #+#    #+#             */
/*   Updated: 2019/03/05 15:49:18 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	int				i;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	i = -1;
	while (++i < (int)n)
	{
		if ((cdest[i] = csrc[i]) == (unsigned char)c)
			return (cdest + i + 1);
	}
	return (NULL);
}
