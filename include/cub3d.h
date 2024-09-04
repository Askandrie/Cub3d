/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 02:34:42 by aska              #+#    #+#             */
/*   Updated: 2024/09/04 02:23:35 by aska             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CUB3D_H
# define CUB3D_H

# include "../lib/MacroLibX/includes/mlx.h"
# include "../lib/MacroLibX/includes/mlx_profile.h"
# include "../lib/libft-plus/libft.h"
# include "init.h"
# include "msg.h"
# include "typedef.h"
# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>

void	title(void);

/**
 * @brief Check a fd is open
 *
 * @param fd fd for test
 * @param msg print information message
 * @return int
 */
int		check_open_path(int fd, char *msg);
void	helltrain(t_cub *cub, t_state state, int return_code, char *msg);
void	debug(t_cub *cub);
void	print_tab(char **tab);
int		attrib_path(t_cub *cub, char *key, char *value);
char	*path_seletor(t_cub *cub, char *key, char *img_path);
int		return_value(t_cub *cub, char *line, char *key, char **value);
int		return_key(t_cub *cub, char *line, char **key);
int		init_organizer(t_cub *cub, char *file);
int		asset_discovery(t_cub *cub);
int		entry_arg_checker(int ac, char **av);
int		mlx_initialize(t_cub *cub);
int		open_cub(t_cub *cub, char *file);
void	goto_exit(int check, int err, t_state state, char *msg);
void    mlx_free(t_cub *cub);
void init_map_process(t_cub *cube, char *line);

void free_mlx_img(t_cub *cub);
void free_mlx_win(t_cub *cub);



#endif