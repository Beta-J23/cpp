/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:01:30 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/22 11:58:06 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat:public Animal{
	private:
		Brain *Brainz;
	
	public:
		Cat();
		~Cat();
		
		void setIdeas(std::string str, int i) const;
		std::string	getIdea(int i) const;
		void makeSound() const;
};

#endif