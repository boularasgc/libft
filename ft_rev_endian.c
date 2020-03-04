/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_endian.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 00:32:14 by mboulara          #+#    #+#             */
/*   Updated: 2019/12/12 18:53:22 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_rev_endian(void *src, size_t size)
{
	int				i;
	uint8_t			*temp;
	uint8_t			*ptr;

	temp = malloc(size);
	ptr = (unsigned char *)src;
	size -= 1;
	i = 0;
	while ((int)--size <= 0)
		temp[size--] = ptr[i++];
	return (temp);
}
