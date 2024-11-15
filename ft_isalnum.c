/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <macaruan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:30:12 by macaruan          #+#    #+#             */
/*   Updated: 2024/11/12 12:34:13 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)
		|| (i >= 48 && i <= 57))
		return (1);
	else
		return (0);
	return (0);
}

int	main(void)
{
	char c = '5';
	printf("%d\n", ft_isalnum(c));
	return (0);
}
