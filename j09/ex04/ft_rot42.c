/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:34:15 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:37:14 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_rot42(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] + 16 <= 'z') ? str[i] + 16 : str[i] - 10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] + 16 <= 'Z') ? str[i] + 16 : str[i] - 10;
		i++;
	}
	return (str);
}