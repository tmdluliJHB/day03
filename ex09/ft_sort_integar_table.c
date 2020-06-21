/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integar_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:46:17 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/21 11:42:20 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ft_sort_integar_table(int *tab, int size)
{
	int i, j;

	i = 0;
	while(i < size)
	{
		j = i;
		while(j < size)
		{
			if(tab[i] >= tab[j])
				swap(&tab[j], &tab[i]);
			++j;
		}
		++i;
	}
}
