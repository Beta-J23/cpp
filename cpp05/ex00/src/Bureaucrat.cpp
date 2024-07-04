/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:03:41 by alpelliz          #+#    #+#             */
/*   Updated: 2024/06/27 18:00:13 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("Ale"), _grade(150)
{
    std::cout << "Bureaucrat default " << _name <<  "created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat " << _name <<  "created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &bureObj):_name(bureObj._name), _grade(bureObj._grade)
{
    std::cout << "Bureaucrat " << _name <<  "created" << std::endl;
}

Bureaucrat incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

Bureaucrat decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}   

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::getName()
{
    return _name;
}

Bureaucrat::getGrade()
{
    return _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &bureObj):_name(bureObj._name), _grade(bureObj._grade)
{
    
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):_name(name), _grade(grade)
{
    
}

Bureaucrat::GradeTooHighException()
{
    
}

Bureaucrat::GradeTooLowException()
{
    
}