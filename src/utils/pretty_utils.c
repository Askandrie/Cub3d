/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretty_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 09:12:45 by aska              #+#    #+#             */
/*   Updated: 2024/07/30 19:11:51 by aska             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../include/cub3d.h"

void    title(void)
{
	title_screen("CUB3D", MAG);
	ft_printf(HRED);
	ft_printf("\t┍━━━━»•» 🎮 «•«━┑\n");
	ft_printf("\t Dev by YGAIFFIE \n");
	ft_printf("\t┕━»•» 🎮 «•«━━━━┙");
	ft_printf(HYEL);
	ft_printf("\t┍━»•» 💣 «•«━┑\n");
	ft_printf("\t\t\t\t And YGAIFFIE \n");
	ft_printf("\t\t\t\t┕━»•» 💣 «•«━┙\n\n");
	ft_printf(CRESET);
}

void    goto_exit(int check, int err, t_state state, char *msg)
{
	if (check != 0)
	{
		ft_printf("\n");
		ft_exit(state, err, msg);
	}
}