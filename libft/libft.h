/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonin <asimonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:16:41 by asimonin          #+#    #+#             */
/*   Updated: 2023/05/03 23:26:42 by asimonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);

int		ft_strncmp(const char *s1, const char *s2, size_t dstsize);

size_t	ft_strlen(const char *s);

char	**ft_split(const char *s, char c);

#endif