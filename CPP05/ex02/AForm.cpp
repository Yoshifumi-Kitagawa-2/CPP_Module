/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:07:47 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/03 19:15:59 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name_("default"), isSigned_(false), gradeToSign_(150), gradeToExecute_(150)
{
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if (gradeToSign < MAXgrade || gradeToExecute < MAXgrade)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > MINgrade || gradeToExecute > MINgrade)
		throw AForm::GradeTooLowException();
	else{
		isSigned_ = false;
	}
}

AForm::AForm(const AForm &src) : name_(src.name_), gradeToSign_(src.gradeToSign_), gradeToExecute_(src.gradeToExecute_)
{
	*this = src;
}

AForm &AForm::operator=(const AForm &right)
{
	if (this != &right){
		isSigned_ = right.isSigned_;
	}
	return (*this);
}

AForm::~AForm()
{
}

const std::string AForm::getName() const
{
	return (name_);
}

bool	AForm::getSigned() const
{
	return (isSigned_);
}

int		AForm::getGradeToSign() const
{
	return (gradeToSign_);
}

int		AForm::getGradeToExecute() const
{
	return (gradeToExecute_);
}

void	AForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > gradeToSign_)
		throw AForm::GradeTooLowException();
	else {
		isSigned_ = true;
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too High in AForm.cpp.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low in AForm.cpp.");
}

std::ostream &operator<<(std::ostream &out, const AForm &right)
{
    out << "-----[AForm Infomation]-----" << std::endl
        << "[AForm name]: " << right.getName() << std::endl
        << "[Required grade to sign]: " << right.getGradeToSign() << std::endl
        << "[Required grade to execute]: " << right.getGradeToExecute() << std::endl;
    return out;
}