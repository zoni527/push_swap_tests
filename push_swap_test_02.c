/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_test_02.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:17:45 by jvarila           #+#    #+#             */
/*   Updated: 2024/12/19 11:23:17 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/jvarila/Repos/push_swap/libft/libft.h"
#include "/home/jvarila/Repos/push_swap/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack b;
	t_list	*temp_a;
	t_list	*temp_b;
	char	*input;
	char	**words;
	char	*first_word;
	int		first_word_len;

	a = (t_stack) {0};
	b = (t_stack) {0};
	temp_a = a.top;
	temp_b = b.top;

	while ((input = get_next_line(STDIN_FILENO)))
	{
		words = ft_split(input, ' ');
		first_word = words[0];
		first_word_len = ft_strlen(first_word);
		if (ft_strncmp(first_word, "exit", first_word_len) == 0)
		{
			for (int i = 0; words[i] != NULL; i++)
				free(words[i]);
			free(words);
			ft_lstclear(&(a.top), free);
			ft_lstclear(&(b.top), free);
			return (0);
		} 
		else if (ft_strncmp(first_word, "print", first_word_len) == 0)
		{
			ft_printf("%s\n", "a: ");
			print_stack(&a);
			ft_printf("%s\n", "b: ");
			print_stack(&b);
		} 
		else
		{
			ft_printf("%s\n")
		}
	}
	if (argc == 1 || argc > 3)
	{
		ft_printf("%s\n", "Example input 1: pa 1 -> pushes 1 to stack a");
		ft_printf("%s\n", "Example input 2: sa	 -> swaps two first elements of a");
	}
	return (0);
}
