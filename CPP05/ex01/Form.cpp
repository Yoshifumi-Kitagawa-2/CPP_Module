/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:09:27 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/21 00:56:45 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _requiredGradeToSign(150), _requiredGradeToExecute(150)
{
}

Form::Form(const std::string name, const int requiredGradeToSign, const requiredGradeToExecute) : _name(name), _signed(false)
{
	if (requiredGradeToSign < MAX_GRADE || requiredGradeToExecute < MAX_GRADE)
		throw Form::GradeTooHighException();
	else if (requiredGradeToSign > MIN_GRADE || requiredGradeToExecute > MIN_GRADE)
		throw Form::GradeTooLowException();
	else{
		_requiredGradeToSign = requiredGradeToSign;
		_requiredGradeToExecute = _requiredGradeToExecute;
	}
}

Form::Form(const Form &src): _name(src._name), _signed(src._signed), _requiredGradeToSign(src.__requiredGradeToSign), _requiredGradeToExecute(src._requiredGradeToExecute)
{
}

Form &Form::operator=(const Form &right)
{
	if (this != &right){
		_name = right._name;
		_signed = right._signed;
		_requiredGradeToSign = right._requiredGradeToSign;
		_requiredGradeToExecute = right._requiredGradeToExecute;
	}
	return (*this);
}

Form::~Form()
{
}

const std::string Form::getName() const
{
	return (_name);
}

bool Form::signedOrNot() const
{
	return (_signed);
}

int Form::getRequiredGradeToSign() const
{
	return (_requiredGradeToSign);
}

int	Form::getRequiredGradeToExecute() const
{
	return (_requiredGradeToExecute);
}

void Form::beSigned(const Bureacrat &bureaucrat);
{
	if (bureaucrat.getGrade() <= _requiredGradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}