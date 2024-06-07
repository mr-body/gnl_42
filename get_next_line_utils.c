/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:20:47 by waalexan          #+#    #+#             */
/*   Updated: 2024/05/25 16:21:25 by waalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dest = (char *)malloc(i + 1);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	init(int *var)
{
	if (!var[2])
	{
		var[0] = 0;
		var[1] = 0;
		var[2] = 1;
	}
}

int	buffer_size(int fd, char *buffer, int *size, int *pos)
{
	*size = read(fd, buffer, BUFFER_SIZE);
	*pos = 0;
	return (*size);
}
