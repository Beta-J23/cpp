/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:01:46 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/17 13:12:28 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class phonebook{
	public:
		contact contact[8];
};

int add_routine(phonebook *pb, int i);
int search_routine(phonebook *pb, int i);
std::string contact_printer(phonebook *pb, int j);
int ft_strlen(std::string str);
std::string ft_strncpy(std::string dest, std::string src, unsigned int n);
std::string contact_printer(std::string str);
std::string truncate(std::string str, int width);
int show_contact(phonebook *pb, int x);

#endif


