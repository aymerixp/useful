/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 12:12:11 by aratinau          #+#    #+#             */
/*   Updated: 2015/06/03 12:16:07 by aratinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	if (!str)
		return (NULL);
	int i;
	i = 0;
	char *rev;
	while (str[i] != '\0')
		i++;
	rev = str + i;
	int j;
	j = 1;
	while (i >= 0)
	{
		i--;
		rev[j] = str[i];
		j++;
	}
	return (rev);
}
