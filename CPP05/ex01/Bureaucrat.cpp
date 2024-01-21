/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:55:42 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/21 00:59:37 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureacrat::Bureacrat() : _name("default"), _grade(150)
{
}

Bureacrat::Bureacrat(const std::string name, int grade) : _name(name)
{
	if (grade < MAX_GRADE)
		throw Bureacrat::GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw Bureacrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureacrat::Bureacrat(const Bureacrat &src) : _name(src._name), _grade(src._grade)
{
}

Bureacrat &Bureacrat::operator=(const Bureacrat &right)
{
	if (this != &right)
		_grade = right._grade;
	return (*this);
}

Bureacrat::~Bureacrat()
{
}

const std::string Bureacrat::getName() const
{
	return (_name);
}

int Bureacrat::getGrade() const
{
	return (_grade);
}

void Bureacrat::incrementGrade()
{
	if (_grade - 1 < MAX_GRADE)
		throw Bureacrat::GradeTooHighException();
	else
		_grade--;
}

void Bureacrat::decrementGrade()
{
	if (_grade + 1 > MIN_GRADE)
		throw Bureacrat::GradeTooLowException();
	else
		_grade++;
}

void Bureacrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureacrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char *Bureacrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream &operator<<(std::ostream &out, const Bureacrat &right)
{
	out << right.getName() << ", bureaucrat grade " << right.getGrade() << std::endl;
	return (out);
}