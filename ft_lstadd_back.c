/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:59:23 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:08:05 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = ft_lstlast(*lst);
	if (!tmp)
		*lst = new;
	else
		tmp->next = new;
}
/*
static void print_list(t_list *lst) {
    while (lst) {
        printf("%d -> ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main() {
    t_list *head = NULL;
    int vals[] = {1, 2, 3};
    t_list *new_node;

    for (int i = 0; i < 3; i++) {
        new_node = ft_lstnew(&vals[i]);
        ft_lstadd_back(&head, new_node);
    }

    print_list(head);  // Should print: 1 -> 2 -> 3 -> NULL
    return 0;
}
*/
