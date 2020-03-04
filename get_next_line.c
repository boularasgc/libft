/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 15:43:24 by mboulara          #+#    #+#             */
/*   Updated: 2019/10/10 22:13:47 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					get_next_line(const int fd, char **line)
{
	char			rb[BUFF_SIZE + 1];
	static t_fd		pfile[MAX_FDS];
	char			*nlp;
	ssize_t			ret;

	if (!line || fd < 0 || fd > MAX_FDS || read(fd, rb, 0) == -1)
		return (-1);
	while (((ret = read(fd, rb, BUFF_SIZE)) > 0))
	{
		rb[ret] = '\0';
		pfile[fd].hd = ft_strjoin2(pfile[fd].hd, rb);
		CLEAR(pfile[fd].ptr);
		pfile[fd].ptr = pfile[fd].hd;
	}
	if (((ret == 0) && !pfile[fd].ptr) || ret == -1)
		return (ret);
	if ((nlp = ft_strchr(pfile[fd].hd, '\n')))
		(*nlp) = '\0';
	(*line) = (pfile[fd].hd) ? ft_strdup(pfile[fd].hd) : NULL;
	if (nlp && *(nlp + 1) != '\0')
		pfile[fd].hd = nlp + 1;
	else
		CLEAR(pfile[fd].ptr);
	return (*line != NULL);
}
