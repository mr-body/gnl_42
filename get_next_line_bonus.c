/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:12:53 by waalexan          #+#    #+#             */
/*   Updated: 2024/05/25 13:13:12 by waalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static int	var[3];
	static char	buffer[BUFFER_SIZE];
	char		str[7000000];
	int			i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	init(var);
	while (1)
	{
		if (var[0] >= var[1])
			if (buffer_size(fd, buffer, &var[1], &var[0]) <= 0)
				break ;
		str[i++] = buffer[var[0]++];
		if (str[i - 1] == '\n')
			break ;
	}
	str[i] = '\0';
	if (i == 0)
		return (NULL);
	return (ft_strdup(str));
}
