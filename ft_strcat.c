/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:16:00 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/18 19:17:44 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *src)
{
	int		i;
	int		x;

	i = -1;
	x = -1;
	while (s1[++i])
		;
	while (src[++x])
		s1[i++] = src[x];
	s1[i] = '\0';
	return (s1);
}