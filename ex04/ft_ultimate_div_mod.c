/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:22:58 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 16:23:17 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
    int div, mod;
    
    div = *a / *b;
    mod = *a % *b;
    
    *a = div;
    *b = mod;
}
