/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atajima <atajima@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:50:43 by atajima           #+#    #+#             */
/*   Updated: 2026/10/20 18:25:02 by atajima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "codexion.h"

int parse_args(int argc, char **argv, t_config *configs)
{
    if (argc != 9 )
        return (1);
    
    configs->num_coders = argv[1];
    configs->time_burn = argv[2];
    configs->time_burn = argv[3];
    configs->time_debug = argv[4];
    configs->time_refactor = argv[5];
    configs->num_compiles = argv[6];
    configs->time_cooldown = argv[7];
    configs->schedule = argv[8];
    return (0)
}
