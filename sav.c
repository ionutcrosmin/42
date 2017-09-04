/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sav.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabadea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 22:16:41 by mabadea           #+#    #+#             */
/*   Updated: 2017/09/04 22:18:43 by mabadea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "head.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 4096

char	**sav()
{
	int	fd;
	int	ret;
	//int	i;
	char	buf[BUF_SIZE + 1];
	char	**st;

	fd = open("example_file", O_RDWR);
	if (fd == -1)
	{
		putstr("map error");
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	printf("RET: %i\n",ret);
	st = NULL;
	/*while ((ret = read(fd, buf, BUF_SIZE)) != 0)
	{
		i = 0;
		while (buf[i] != '\n')
		{
			st[ret][i] = buf[i];
			i++;
		}
		st[ret][i] = '\0';
	}*/
	return (st);
}
