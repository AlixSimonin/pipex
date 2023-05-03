/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonin <asimonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:34:34 by asimonin          #+#    #+#             */
/*   Updated: 2023/05/03 23:16:25 by asimonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	init(int ac, char **av, char **env, t_data *var)
{
	var -> env = env;
	var -> av = av;
	var -> nbr_cmd = ac - 3;
}



int	main(int ac, char **av, char **env)
{
	t_data	var;
	int		i;

	i = 0;
	if (ac < 5)
		return (write(1, "Wrong amount of arguments\n", 27), 1);
	init(ac, av, env, &var);
	while(env[i])
	{}
// 	if (pipe(var.fd) == -1)
// 		return (write(1, "Pipe error\n", 12), 1);
// 	inint(ac, av, &var);
// 	// static char *tab[3] = {"ls", "-R", NULL};
// 	printf("MOHA LE BG\n");
// 	// int fd = open("CAMIL.txt", 0666);
// 	// dup2(fd, STDOUT_FILENO);
// 	// execve("/bin/ls", tab, env);
// 	printf("CAMIL = %i\n", access("CAMIL.txt", F_OK));
// 	printf("CAMILA = %i\n", access("CAMILA.txt", F_OK));
}

// t_data
/*
	nbcmd = ac - 3;
	env;
*/

//	1		2		3	4	  5		6	7
// ./pipex INFILE	cat	ls	grep	wc	OUTFILE
//	0		1		2	3	4		5	6
// fork()
// wait()
// waitpid()
// pipe()
// dup2()	OK
// execve()	OK
// access() OK