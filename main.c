/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 17:41:16 by aleclet           #+#    #+#             */
/*   Updated: 2017/02/21 09:43:29 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			main()
{
	char	*text;
	int		fd;
	char	**line;
	int		i;


	text = (void*)(0);
	line = &text;
   	fd = open("to_read.txt", O_RDONLY);
	i = 0;

	while (get_next_line(fd, line))
	{
		printf("==========>[%s]\n", *line);
		free(*line);
	}

//
//	get_next_line(fd, line);
//	printf("==========>[%s]\n", *line);

	close(fd);
	return (0);
}
