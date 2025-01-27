/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 15:51:26 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/06/01 16:27:20 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef MAIN_H
# define MAIN_H

#include <stdbool.h>

bool	parse_uint(const char *s, unsigned int *result,\
	unsigned int min, unsigned int max);
int		calculate(unsigned int *arr, int count);

# endif