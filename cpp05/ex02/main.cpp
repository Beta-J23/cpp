/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:04:12 by alpelliz          #+#    #+#             */
/*   Updated: 2024/07/25 19:34:06 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
   	try {
		Bureaucrat signer("Lello", 5);
		ShrubberyCreationForm tree("Happy");
		RobotomyRequestForm robo("Brain");
		PresidentialPardonForm zap("Tizio");
		signer.signForm(tree);
		signer.signForm(robo);
		signer.signForm(zap);
		signer.executeForm(tree);
		signer.executeForm(robo);
		signer.executeForm(zap);
		signer.signForm(tree);
		Bureaucrat executor("Gigi", 150);
		robo.execute(executor);
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
}