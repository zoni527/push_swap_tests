/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_test_01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:26:34 by jvarila           #+#    #+#             */
/*   Updated: 2024/12/16 15:27:47 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/jvarila/Repos/push_swap/libft/libft.h"
#include "/home/jvarila/Repos/push_swap/push_swap.h"

int	main(void)
{
	t_stack	a;
	t_stack	b;

	a = (t_stack){.top = NULL, .size = 0, .error = 0};
	b = (t_stack){.top = NULL, .size = 0, .error = 0};
	push(&a, 1);
	push(&a, -42);
	push(&a, 420);
	push(&b, 2);
	push(&b, INT_MAX);
	push(&b, 666);
	print_stack(&b);
	ft_printf("\n");
	print_stack(&a);
	ft_lstclear(&a.top, free);
	ft_lstclear(&b.top, free);
	return (0);
}
