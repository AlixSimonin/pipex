/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonin <asimonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:52:34 by asimonin          #+#    #+#             */
/*   Updated: 2023/05/05 17:59:40 by asimonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	if (!str)
		i = write (2, "(null)", 6);
	else
	{
		i = printf_strlen(str);
		printf_putstr(str);
	}
	return (i);
}
