/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:07:59 by aska              #+#    #+#             */
/*   Updated: 2024/08/03 20:20:15 by aska             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../include/cub3d.h"

void    mlx_free(t_cub *cub)
{
    free_mlx_win(cub);
    free_mlx_img(cub);
    if (cub->mlx != NULL)
        mlx_destroy_display(cub->mlx);
    ft_free(cub->mlx);
}

void    helltrain(t_cub *cub, t_state state, int return_code, char *msg)
{
    cub->fd = ft_close(cub->fd);
    mlx_free(cub);
    ft_free(cub->img);
    ft_free(cub->root_path);
    ft_free(cub->map);
    ft_free(cub);
    ft_exit(state, return_code, msg);
}