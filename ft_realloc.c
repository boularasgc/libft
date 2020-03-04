/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:56:20 by mboulara          #+#    #+#             */
/*   Updated: 2019/11/07 22:57:13 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t original_size, size_t new_size)
{
	void	*newbuff;

	if (new_size == 0)
	{
		CLEAR(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(new_size));
	else if (new_size <= original_size)
		return (ptr);
	else
	{
		newbuff = malloc(new_size);
		ft_memcpy(newbuff, ptr, sizeof(void*) * new_size);
		ft_bzero(newbuff + new_size, (new_size - original_size));
		CLEAR(ptr);
		return (newbuff);
	}
}
