/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:08:15 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/19 12:54:29 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

class HumanA{
	private:
		Weapon _weapon;
		std::string name;
	public:
	HumanA();
	HumanA(std::string weapontype, Weapon weptype);
	~HumanA();
	void setType();
	void attack();
};