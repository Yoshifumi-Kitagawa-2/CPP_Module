/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:08:58 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/09 00:48:35 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
class ScalarConverter
{
	private:
		std::string input_;
		char	char_;
		int		int_;
		float	float_;
		double	double_;
		bool	impossible_;

		int 	type_;

		bool	isChar() const;
		bool 	isInt() const;
		bool	isFloat() const;
		bool	isDouble() const;
		bool	isSpecialLiteral()const;
		void	parseInput();

		void	scalarConverter();
		
		ScalarConverter();
	public:
		ScalarConverter(std::string input);
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &right);
		~ScalarConverter();

		void printChar()const;
		void printInt()const;
		void printFloat()const;
		void printDouble()const;
};

int 	countDots(const std::string& str);
std::ostream&   operator<<(std::ostream& out, const ScalarConverter& ScalarConverter);

#endif