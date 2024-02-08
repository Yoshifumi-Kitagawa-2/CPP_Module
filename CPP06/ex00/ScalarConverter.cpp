/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:08:56 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/08 23:29:44 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string input):input_(input), char_('\0'), int_(0), float_(0.0f), double_(0.0), type_(0)
{
	parseInput();
	scalarConverter();
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &right)
{
	if (this != &right)
	{
		input_ = right.input_;
		char_ = right.char_;
		int_ = right.int_;
		float_ = right.float_;
		double_ = right.double_;
		type_ = right.double_;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

bool ScalarConverter::isChar()const
{
	return (true);
}

bool ScalarConverter::isInt()const
{
	return (true);
}

bool ScalarConverter::isFloat()const
{
	return (true);
}

bool ScalarConverter::isDouble()const
{
	return (true);
}

void ScalarConverter::parseInput()
{
	bool (ScalarConverter::*functions[4])() const = {&ScalarConverter::isChar, &ScalarConverter::isInt, &ScalarConverter::isFloat, &ScalarConverter::isDouble};
	for (int i = 0; i < 4; i++)
	{
		if ((this->*functions[i])() == true)
			type_ = i;
	}
}

void ScalarConverter::scalarConverter()
{
	if (type_ == 0)
	{
		char_ = static_cast<char>(input_[0]);
		int_ = static_cast<int>(char_);
		float_ = static_cast<float>(char_);
		double_ = static_cast<double>(char_);
	}
	else if (type_ == 1)
	{
		int_ = std::stoi(input_);
		char_ = static_cast<char>(int_);
		float_ = static_cast<float>(int_);
		double_ = static_cast<double>(int_);
	}
	else if (type_ == 2)
	{
		float_ = std::stof(input_);
		char_ = static_cast<char>(float_);
		int_ = static_cast<int>(float_);
		double_ = static_cast<double>(float_);
	}
	else if (type_ == 3)
	{
		double_ = std::stod(input_);
		char_ = static_cast<char>(double_);
		int_ = static_cast<int>(double_);
		float_ = static_cast<float>(double_);
	}
}

void ScalarConverter::printChar() const
{
	std::cout << char_ << std::endl;
}

void ScalarConverter::printInt() const
{
	std::cout << int_ << std::endl;
}


void ScalarConverter::printFloat() const
{
	std::cout << float_ << std::endl;
}

void ScalarConverter::printDouble() const
{
	std::cout << double_ << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ScalarConverter &right)
{
    out << "char: ";
	right.printChar();
	out << "int: ";
	right.printInt();
	out << "float: ";
	right.printFloat();
	out << "double: ";
	right.printDouble();
    return out;
}
