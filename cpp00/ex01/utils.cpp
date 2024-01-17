/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:24:01 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/17 13:02:54 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int ft_strlen(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

std::string truncate(std::string str, int width)
{
    if (ft_strlen(str) > width)
            return str.substr(0, width);
    return str;
}

std::string ft_strncpy(std::string dest, std::string src, unsigned int n)
{
	unsigned int	i;
	int				cond;

	cond = 1;
	i = 0;
	while (i < n)
	{
		if (src[i] != '\0' && cond == 1)
			dest[i] = src[i];
		else
			cond = 0;
		if (cond == 0)
			dest[i] = '\0';
		i++;
	}
	return (dest);
}