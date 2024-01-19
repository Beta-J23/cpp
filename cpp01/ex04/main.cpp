/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:37:57 by alpelliz          #+#    #+#             */
/*   Updated: 2024/01/19 18:54:02 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
/*
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Insert 3 args: filename, s1 string to replace, s2 string that will replace" << std::endl;
		return(0);
	}
	std::string		file_name = argv[1];
	file_name += ".replace";
	std::ifstream	myfile(argv[1]);
	std::ofstream	result(file_name);
	std::string		line;
	std::string		all_file;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	
	int		i = 0;
	
	if (myfile.is_open())
	{
		while(std::getline(myfile, line) != NULL)
		{
			all_file += line;
			all_file += "\n";
			if (line.find(s1))
	}
	else 
		std::cout << "unable to open file" << std::endl;

	myfile.close;
	
}*/