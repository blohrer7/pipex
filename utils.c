/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:08:11 by blohrer           #+#    #+#             */
/*   Updated: 2025/02/07 10:37:34 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	open_files(const char *infile, const char *outfile, int *fd_in, int *fd_out)
{
	*fd_in = open(infile, O_RDONLY);
	if(*fd_in == -1)
	{
		perror("Error opening input file.");
		exit(EXIT_FAILURE);
	}

	*fd_out = open(outfile, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if(*fd_out == -1)
	{
		perror("Error opening output file.");
		close(*fd_in);
		exit(EXIT_FAILURE);
	}
}
