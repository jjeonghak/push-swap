#include "push_swap.h"
#include<stdio.h>
static void	init_deque(t_deque *a, t_deque *b)
{
	a->size = 0;
	b->size = 0;
	a->head = NULL;
	b->head = NULL;
	a->tail = NULL;
	b->tail = NULL;
	return ;
}

int	main(int argc, char **argv)
{
	t_deque	a;
	t_deque	b;

	if (argc > 1 && argv != NULL)
	{
		init_deque(&a, &b);
		parse_argv(argv, &a);
		if (a.size > 0)
		{
			sort_deque(&a, &b);
			
			t_dlist *temp;
			temp = a.tail;
			while (temp)
			{
				printf("a: %d\n", temp->index);
				temp = temp->previous;
			}
			
			temp = b.tail;
			while (temp)
			{
				printf("b: %d\n", temp->index);
				temp = temp->previous;
			}
			ft_clear(&a);
			ft_clear(&b);
		}
	}
	return (0);
}
