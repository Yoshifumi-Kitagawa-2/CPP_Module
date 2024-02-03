/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:07:42 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/03 19:15:56 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name_;
		bool isSigned_;
		const int gradeToSign_;
		const int gradeToExecute_;
	public:
		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &src);
		AForm &operator=(const AForm &right); 
		~AForm();

		const std::string getName() const;
		bool	getSigned() const;
    	int		getGradeToSign() const;
    	int		getGradeToExecute() const;

		void	beSigned(const Bureaucrat &src);
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream&   operator<<( std::ostream& out, const AForm& right );

#endif