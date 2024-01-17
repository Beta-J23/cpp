/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:24:01 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/17 18:11:13 by alpelliz         ###   ########.fr       */
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

/*
std::string space_finder(std::string str)
{
    std::string str2;
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == 32)
            break;
        i++;
    }
    str2 = str.substr(0, i);
    return(str2);
}*/