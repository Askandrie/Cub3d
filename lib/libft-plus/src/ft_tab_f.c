/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:22:33 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/07/09 16:37:39 by aska             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../libft.h"

char   **ft_tab_f(char **tab)
{
    int i;

    i = 0;
    while (tab[i] != NULL)
    {
        ft_free(tab[i]);
        i++;
    }
    ft_free(tab);
    return (NULL);
}