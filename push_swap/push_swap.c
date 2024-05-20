/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsa-varg <rsa-varg@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:50:22 by rsa-varg          #+#    #+#             */
/*   Updated: 2024/05/20 16:15:44 by rsa-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_function(char *function)
{
	if (function == "sa")
		swap_a(list);
	if (function == "sb")
		swap_b(list);
	if (function == "ss")
		swap_ab(list);
	if (function == "pa")
		push_a(list);
	if (function == "pb")
		push_b(list);
	if (function == "ra")
		rotate_a(list);
	if (function == "rb")
		rotate_b(list);
	if (function == "rr")
		rotate_ab(list);
	if (function == "rra")
		rev_rotate_a(list);
	if (function == "rrb")
		rev_rotate_b(list);
	if (function == "rrr")
		rev_rotate_rb(list);
}
