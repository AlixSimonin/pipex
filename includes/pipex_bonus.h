/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonin <asimonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:30:24 by asimonin          #+#    #+#             */
/*   Updated: 2023/05/07 17:40:34 by asimonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>

# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

typedef struct s_data
{
	int		nbr_cmd;
	int		prev_pipe;
	int		status;
	int		fd[2];
	int		*pid;
	char	*out;
	char	*in;
	char	*cmd;
	char	**cmd_flag;
	char	**path;
	int		here_doc;
}	t_data;

// sources //

int		main(int ac, char **av, char **env);

void	init(int ac, char **av, t_data *var);
void	get_path(t_data *var, char **env);
void	free_all(t_data *var);
void	free_tab(char **tab);
void	redirect(t_data *var, int i);
void	child_process(t_data *var, int i, char *cmd, char **env);
void	parent_process(t_data *var);
void	close_(int *fd);

char	*find_path(t_data *var, char *cmd);

#endif