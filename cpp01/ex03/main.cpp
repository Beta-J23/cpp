/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:10:01 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/19 12:03:04 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
    Weapon weap;
    std::cout << weap.getType() << std::endl;
    weap.setType("fucicanna");
    std::cout << weap.getType() << std::endl;

    Weapon weap2("crude spiked club");
    std::cout << weap2.getType() << std::endl;
}