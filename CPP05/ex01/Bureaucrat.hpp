/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:55:37 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/20 18:28:33 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureacrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureacrat();
		Bureacrat(const std::string name, int grade);
		Bureacrat(const Bureacrat &src);
		~Bureacrat();
		Bureacrat &operator=(const Bureacrat &right);
		
		const std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &Form);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureacrat &right);

#endif