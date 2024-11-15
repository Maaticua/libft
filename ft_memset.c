/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maati <maati@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 12:58:19 by maati             #+#    #+#             */
/*   Updated: 2024-11-14 12:58:19 by maati            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(void *p, int value, size_t count)
{
    char    *start;

    if (b == NULL)
        return (NULL);
    
    start = b;
    while (count)
    {
        *start = value;
        start++;
        count--;
    }
    return (b);
}