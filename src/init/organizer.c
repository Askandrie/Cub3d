/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:33:04 by aska              #+#    #+#             */
/*   Updated: 2024/08/03 20:05:02 by aska             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../include/cub3d.h"

int	init_organizer(t_cub *cub, char *file)
{
	cub->err = open_cub(cub, file);
	if (chk_box(cub->err, EQ, SUCCESS, file) == 1)
		helltrain(cub, ERROR, 1, file);
	cub->err = asset_discovery(cub);
	if (chk_box(cub->err, EQ, SUCCESS, "Asset discover on .cub") == 1)
		helltrain(cub, ERROR, 1, "asset_discovery");
	// cub->err = mlx_initialize(cub);
	// if (cub->mlx == NULL)
	// 	helltrain(cub, ERROR, 1, "mlx_init");
	return (SUCCESS);
}
