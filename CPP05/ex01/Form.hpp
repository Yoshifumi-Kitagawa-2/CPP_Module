/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:11:32 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/21 00:01:28 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureacrat;

class Form
{
	private:
		const std::string _name;
		bool	_signed;
		const int _requiredGradeToSign;
		const int _requiredGradeToExecute;
	public:
		Form();
		Form(const std::string name, const int requiredGradeToSign, const requiredGradeToExecute);
		Form(Form &src);
		Form &operator=(const Form &right);
		~Form();

		const	std::string getName() const;
		bool	signedOrNot()const;
		int		getRequiredGradeToSign() const;
		int		getRequiredGradeToExecute() const;
		void	beSigned(const Bureacrat &bureaucrat);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		}
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		}
}

#endif