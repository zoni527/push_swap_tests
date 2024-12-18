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

	a = (t_stack){0};
	b = (t_stack){0};

	push(&a, 1);
	push(&a, 2);
	push(&a, 3);
	push(&b, -1);
	push(&b, -2);
	push(&b, -3);

	ft_printf("\n");
	ft_printf("a: ");
	print_stack(&a);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	sa(&a);
	ft_printf("a: ");
	print_stack(&a);
	sb(&b);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	pa(&a, &b);
	ft_printf("a: ");
	print_stack(&a);
	ft_printf("b: ");
	print_stack(&b);
	pb(&a, &b);
	ft_printf("a: ");
	print_stack(&a);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	ss(&a, &b);
	ft_printf("a: ");
	print_stack(&a);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	ra(&a, &b);
	ft_printf("a: ");
	print_stack(&a);
	rb(&a, &b);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	rr(&a, &b);
	ft_printf("a: ");
	print_stack(&a);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	rra(&a, &b);
	ft_printf("a: ");
	print_stack(&a);
	rrb(&a, &b);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	rrr(&a, &b);
	ft_printf("a: ");
	print_stack(&a);
	ft_printf("b: ");
	print_stack(&b);
	ft_printf("\n");

	ft_lstclear(&a.top, free);
	ft_lstclear(&b.top, free);
	return (0);
}
