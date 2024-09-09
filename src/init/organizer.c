/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:33:04 by aska              #+#    #+#             */
/*   Updated: 2024/09/07 18:15:36 by aska             ###   ########.fr       */
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
	cub->err = init_map_process(cub);
	if (chk_box(cub->err, EQ, SUCCESS, "Initialize Map") == 1)
		helltrain(cub, ERROR, 1, "Error on Initialization Map");
	cub->err = map_creation(cub);
	if (chk_box(cub->err, EQ, SUCCESS, "Creating Map") == 1)
		helltrain(cub, ERROR, 1, "Error on Initialization Map");
	// cub->err = mlx_initialize(cub);
	// if (cub->mlx == NULL)
	// 	helltrain(cub, ERROR, 1, "mlx_init");
	return (SUCCESS);
}
