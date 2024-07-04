/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:03:24 by alpelliz          #+#    #+#             */
/*   Updated: 2024/07/04 12:33:52 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string   _name;
        int          		_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade );
        ~Bureaucrat();
		Bureaucrat (Bureaucrat &bureObj);			// Copy costructor
		getName();
		getGrade();
		incrementGrade();
		decrementGrade();

	class Bureaucrat::GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Grade is too high!";
			}
	};
	class Bureaucrat::GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Grade is too low!";
			}
	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}

#endif