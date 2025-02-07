/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:50:53 by blohrer           #+#    #+#             */
/*   Updated: 2025/02/07 09:03:12 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

void	free_args(char **args);
void	first_child(int fd_in, int *pipefd, char *cmd1, char **cmd1_args,
			char **envp);
void	second_child(int *pipefd, int fd_out, char *cmd2, char **cmd2_args,
			char **envp);
void	execute_pipe(char *cmd1, char *cmd2, int fd_in, int fd_out,
			char **cmd1_args, char **cmd2_args, char **envp);
char	*get_command_path(char *cmd, char **envp);
char	**parse_command(char *cmd);
int		open_input_file(char *filename);
int		open_output_file(char *filename);

#endif
