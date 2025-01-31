/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboukrou <lboukrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 23:55:26 by lboukrou          #+#    #+#             */
/*   Updated: 2018/04/16 02:05:43 by lboukrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fchar(const char *line, int c)
{
	int		ch;
	int		i;

	ch = c;
	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == c)
			return (1);
		i++;
	}
	return (0);
}
