/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:10:05 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/19 11:57:31 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructor sample
Weapon::Weapon() : _type("pistolone"){}

Weapon::Weapon(std::string weapontype)
{
	setType(weapontype);
}

//destructor sample
Weapon::~Weapon(){}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string& Weapon::getType()
{
	return(_type);
}