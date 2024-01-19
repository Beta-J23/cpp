/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:09:55 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:28 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

class HumanB{
	private:
		Weapon _weapon;
        std::string name;
	public:
	HumanB();
	~HumanB();
    
	void attack(std::string weapon_type);
};