/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:01:37 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/17 13:21:17 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <cstdio>
#include <string>

int add_routine(phonebook *pb, int i)
{
	std::cout << "First name: " << std::endl;
	std::cin >> pb->contact[i].first_name;
	std::cout << "last name: " << std::endl;
	std::cin >> pb->contact[i].last_name;
	std::cout << "nickname: " << std::endl;
	std::cin >> pb->contact[i].nickname;
	std::cout << "phone number: " << std::endl;
	std::cin >> pb->contact[i].phone_number;
	std::cout << "darkest secret: " << std::endl;
	std::cin >> pb->contact[i].darkest_secret;
	return (0);
}

int search_routine(phonebook *pb, int i)
{
	int j = 0;
	int x = 0;
	while (j < i)
	{
		std::cout << contact_printer(std::to_string(j + 1));
		std::cout << '|';
		std::cout << contact_printer(pb->contact[j].first_name);
		std::cout << '|';
		std::cout << contact_printer(pb->contact[j].last_name);
		std::cout << '|';
		std::cout << contact_printer(pb->contact[j].nickname) << std::endl;
		//std::cout << pb->contact[j].last_name << std::endl;
		j++;
	}
	std::cout << "insert index number to see contact details" << std::endl;
	std::cin >> x;
	while (x < 1 && x > 8)
	{	
		std::cin >> x;
		std::cout << "Insert a correct number";
	}
	if (x >= 1 && x <= 8)
		show_contact(pb, x);
	return (0);
}

int show_contact(phonebook *pb, int x)
{
	(void)x;
	(void)pb;
	std::cout << "You are in show contact!!!" <<std::endl;
	return(0);
}

std::string contact_printer(std::string str)
{
	//std::cout << "string before processing\n" + str << std::endl;
	int	i = 0;
	int j = 0;
	int x = 0;
	std::string mod_str;
	std::string second_str;
	
	x = ft_strlen(str);
	j = 10 - x;
	//std::cout << "str = " << str;
	//std::cout << "J = " << j << "\n";
	//if (j <= 0)
	if (x > 9)
	{
		i = 0;
		//mod_str = ft_strncpy(str, mod_str, 9);
		//mod_str = truncate(str, 9);
		mod_str = str.substr(0, 9);
		/*
		while (i < 9)
		{
			mod_str[i] = str[i];
			//std::cout << mod_str[i];
			i++;
		}*/
		//mod_str = ft_strncpy(mod_str, str, 9);
		mod_str = mod_str + '.';
		//std::cout << "mod_str > 9 = " + mod_str;
	}
	else
	{
		while(i < j)
		{
			//mod_str[i] = 32;
			mod_str = ' ' + mod_str;
			i++;
		}
		mod_str = mod_str + str;
		//mod_str = mod_str + ft_strncpy(second_str, str, x);
		//std::cout << "string after processing\n" + mod_str << std::endl;
	}
	return (mod_str);
}

int main()
{
	int i = 0;
	phonebook contact;
	std::string input;

	//char input[10];
	std::cout << "Welcome to the phonebook!. Enter: \n \
	ADD to save a new contact; \n \
	SEARCH to display a specific contact;\n \
	EXIT to quit the program and delete all contacts!!!\n";
	while(1)
	{
		std::cin >> input;
		if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			add_routine(&contact, i);
			i++;
		}
		else if (input == "SEARCH")
		{
			if(i > 0)
				std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
			//std::cout << "SEARCH" << std::endl;
			search_routine(&contact, i);
		}
		else if (input == "EXIT")
		{
			//std::cout << "This will delete all your contact, If you want to continue type YES, if not type NO\n";
			//std::cin >> input;
			//if (input == "YES")
				break;
			//else if (input == "NO")
			//	std::cout << "Welcome back" << std::endl;
			//else
			//	std::cout << "Wrong input. Try again" << std::endl;
			// RIVEDI CICLO PER USCIRE.
		}
		else 
			std::cout << "Wrong input. Try again" << std::endl;
	}
}
