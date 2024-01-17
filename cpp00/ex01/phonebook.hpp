/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:01:46 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/17 18:14:15 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>

class phonebook{
	public:
		contact contact[8];
		int		total_contact;
};

int add_routine(phonebook *pb, int i);
int search_routine(phonebook *pb);
std::string contact_printer(phonebook *pb, int j);
int ft_strlen(std::string str);
std::string contact_printer(std::string str);
int show_contact(phonebook *pb, int x);
std::string space_finder(std::string str);

#endif


