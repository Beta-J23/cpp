/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:10:42 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/19 12:59:39 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA() : _weapon("pistoletta"){};

HumanA :: HumanA(std::string weapontype, Weapon weptype)
{
    Weapon.setType(weptype);
}