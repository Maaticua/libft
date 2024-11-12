/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isasci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <macaruan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:35:00 by macaruan          #+#    #+#             */
/*   Updated: 2024/11/12 12:42:40 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isasci(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
	return (0);
}

// int	main(void)
// {
// 	char c = 'i';
// 	printf("%d\n", ft_isasci(c));
// 	return (0);
// }
