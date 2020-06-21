/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:24:30 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/21 12:16:45 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strrev(char *str)
{
    // variable to store the length of str
    int len = 0;
    
    while(*str != '\0')
    {
        len++;
        *str++;
    }
    
    char str_temp[len + 1];
	
    for(int i = len - 1; i >= 0; i--)
        str_temp[i] = str[i];

	return str_temp;
}