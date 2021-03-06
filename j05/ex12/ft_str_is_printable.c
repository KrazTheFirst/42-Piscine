/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 16:28:54 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 22:50:47 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_printable(char *str)
{
	int		i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0' && str[i] >= ' ' && str[i] < 127)
			i += 1;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}
