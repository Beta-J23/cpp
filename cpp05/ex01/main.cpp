/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:04:12 by alpelliz          #+#    #+#             */
/*   Updated: 2024/07/04 19:09:00 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int main()
{
    try { 
        Bureaucrat bureaucrat("Ugo", 24);
        Form form("Form", 50, 70);
        std::cout << form << std::endl;
        bureaucrat->signForm(form);
        bureaucrat->incrementGrade();
        Form->beSigned(bureaucrat);
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    
    
    return (0);
}