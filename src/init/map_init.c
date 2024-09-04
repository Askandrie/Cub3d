/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:01:25 by aska              #+#    #+#             */
/*   Updated: 2024/09/04 02:28:03 by aska             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../include/cub3d.h"

int is_empty_line(char *line)
{
    int i;

    i = 0;
    while (line[i] != '\n')
    {
        if (line[i] != ' ')
            return (FALSE);
        i++;
    }
    return (TRUE);
}


void init_map_process(t_cub *cube, char *line)
{
    (void)cube;
    if ( is_empty_line(line) == TRUE)
        return ;
    
}