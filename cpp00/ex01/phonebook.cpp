/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:01:37 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/17 18:41:15 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int add_routine(phonebook *pb, int i)
{
	std::string fit;
	std::getline(std::cin, fit);
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, pb->contact[i].first_name); 
	//std::cout << std::endl;
	std::cout << "last name: " << std::endl;
	std::getline(std::cin, pb->contact[i].last_name);
	std::cout << "nickname: " << std::endl;
	std::getline(std::cin, pb->contact[i].nickname);
	std::cout << "phone number: " << std::endl;
	std::getline(std::cin, pb->contact[i].phone_number);
	std::cout << "darkest secret: " << std::endl;
	std::getline(std::cin, pb->contact[i].darkest_secret);
	return (0);
}

int search_routine(phonebook *pb)
{
	int j = 0;
	int x = 0;
	std::string in; 
	while (j < pb->total_contact)
	{
		std::cout << contact_printer(std::to_string(j + 1));
		std::cout << '|';
		std::cout << contact_printer(pb->contact[j].first_name);
		std::cout << '|';
		std::cout << contact_printer(pb->contact[j].last_name);
		std::cout << '|';
		std::cout << contact_printer(pb->contact[j].nickname) << std::endl;
		j++;
	}
	std::cout << "insert index number to see contact details" << std::endl;
	std::cin >> in;
	if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
		}
	if(ft_strlen(in) == 1 && (in[0] > 48 && in[0] < 57))
			x = in[0] - 48;
	while (x < 1 || x > 8)
	{
		std::cout << "Insert a number beetween 1 and 8" << std::endl;
		std::cin >> in;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		if(ft_strlen(in) == 1 && (in[0] > 48 && in[0] < 57))
		{
			x = in[0] - 48;
			break;
		}
	}
	if (x >= 1 && x <= 8)
	{
		if (x > pb->total_contact)
			std::cout << "Contact not found" << std::endl;
		else
			show_contact(pb, x - 1);
	}
	return (0);
}

int show_contact(phonebook *pb, int x)
{
	std::cout << "First name: " << pb->contact[x].first_name <<std::endl;
	std::cout << "Last name: " << pb->contact[x].last_name <<std::endl;
	std::cout << "Nickname: " << pb->contact[x].nickname <<std::endl;
	std::cout << "Phone number: " << pb->contact[x].phone_number <<std::endl;
	std::cout << "Darkest secret: " << pb->contact[x].darkest_secret <<std::endl;
	return(0);
}

std::string contact_printer(std::string str)
{
	int	i = 0;
	int j = 0;
	int x = 0;
	std::string mod_str;
	std::string second_str;
	
	x = ft_strlen(str);
	j = 10 - x;
	if (x > 9)
	{
		i = 0;
		mod_str = str.substr(0, 9);
		mod_str = mod_str + '.';
	}
	else
	{
		while(i < j)
		{
			mod_str = ' ' + mod_str;
			i++;
		}
		mod_str = mod_str + str;
	}
	return (mod_str);
}
