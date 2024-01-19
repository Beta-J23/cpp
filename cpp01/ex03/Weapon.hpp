/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:10:09 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/19 12:00:39 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(std::string weapontype); //costruttore custom
		~Weapon();
		const std::string& getType();
		void setType(std::string type);
};