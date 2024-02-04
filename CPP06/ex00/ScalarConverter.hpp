/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:08:58 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/04 17:33:51 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	private:
		std::string input_;
		char	char_;
		int		int_;
		float	float_;
		double	double_;
		
		
		void scalarConverter();
		
		ScalarConverter();
	public:
		ScalarConverter(std::string input);
		ScalarConverter &operator=(const ScalarConverter &right);
		~ScalarConverter();

		void printChar()const;
		void printInt()const;
		void printflaot()const;
		void printdouble()const;
};

#endif