/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:08:56 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/10 18:56:36 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string input):input_(input), char_('\0'), int_(0), float_(0.0f), double_(0.0), somethingFailed_(false), type_(0)
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
	if (input_.length() == 1 && std::isprint(input_[0]) && !std::isdigit(input_[0]))
		return (true);
	return (false);
}

bool ScalarConverter::isInt()const
{
	std::string::size_type i = 0;
	while (std::isspace(input_[i]))
		i++;
	if (input_[i] == '-' || input_[i] == '+')
		i++;
	for (; i < input_.length() ; ++i)
	{
		if (!isdigit(input_[i]))
			return (false);
	}
	return (true);
}

int countDots(const std::string& str) {
    int dotCount = 0;
    for (std::string::size_type i = 0; i < str.length(); ++i) {
		char ch = str[i];
        if (ch == '.') {
            dotCount++;
        }
    }
    return dotCount;
}

bool ScalarConverter::isFloat()const
{
	if (input_[input_.length()] != 'f')
		return (false);
	if (countDots(input_) != 1)
		return (false);
	if (input_[0] == '.' || input_[input_.length() - 1] == '.')
		return (false);
	std::string::size_type i = 0;
	while (std::isspace(input_[i]))
		i++;
	if (input_[i] == '-' || input_[i] == '+')
		i++;
	for (; i < input_.length() - 1 ; ++i)
	{
		if (!isdigit(input_[i]) && input_[i] != '.')
			return (false);
	}
	return (true);
}

bool ScalarConverter::isDouble()const
{
	if (countDots(input_) != 1)
		return (false);
	if (input_[0] == '.' || input_[input_.length() - 1] == '.')
		return (false);
	std::string::size_type i = 0;
	while (std::isspace(input_[i]))
		i++;
	if (input_[i] == '-' || input_[i] == '+')
		i++;
	for (; i < input_.length() - 1 ; ++i)
	{
		if (!isdigit(input_[i]) && input_[i] != '.')
			return (false);
	}
	return (true);
}

bool ScalarConverter::isSpecialLiteral()const
{
	const std::string specialLiteral[6] = {"nan", "nanf", "+inf", "-inf", "+inff", "-inff"};
	for (int i = 0; i < 6; ++i)
	{
		if (input_.compare(specialLiteral[i]) == 0)
			return (true);
	}
	return (false);
}

void ScalarConverter::parseInput()
{
	int i = 0;
	bool (ScalarConverter::*functions[5])() const = {&ScalarConverter::isChar, &ScalarConverter::isInt, &ScalarConverter::isFloat, &ScalarConverter::isDouble, &ScalarConverter::isSpecialLiteral};
	for (; i < 5; ++i)
	{
		if ((this->*functions[i])() == true){
			type_ = i;
			break;
		}
		else if (i == 4 && (this->*functions[i])() == false)
			type_ = 5;
	}
}

void ScalarConverter::scalarConverter()
{
	try{
		switch(type_)
		{
			case 0:
				char_ = static_cast<char>(input_[0]);
				int_ = static_cast<int>(char_);
				float_ = static_cast<float>(char_);
				double_ = static_cast<double>(char_);
				break;
			case 1:
				int_ = std::stoi(input_);
				char_ = static_cast<char>(int_);
				float_ = static_cast<float>(int_);
				double_ = static_cast<double>(int_);
				break;
			case 2:
				float_ = std::stof(input_);
				char_ = static_cast<char>(float_);
				int_ = static_cast<int>(float_);
				double_ = static_cast<double>(float_);
				break;
			case 3:
				double_ = std::stod(input_);
				float_ = static_cast<float>(double_);
				char_ = static_cast<char>(double_);
				int_ = static_cast<int>(double_);
				break;
			default:
				break;
		}
	}
	catch(std::out_of_range &e)
	{
		std::cerr << e.what() << '\n';
		somethingFailed_ = true;
	}
	catch(std::invalid_argument &e)
	{
		std::cerr << e.what() << '\n';
		somethingFailed_ = true;
	}
}

void ScalarConverter::printChar() const
{
	if (type_ == 4 || somethingFailed_)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(int_))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << char_ << std::endl;
}

void ScalarConverter::printInt() const
{
	if (type_ == 4 || somethingFailed_)
		std::cout << "impossible" << std::endl;
	else
		std::cout << int_ << std::endl;
}

void ScalarConverter::printFloat() const
{
	if (somethingFailed_)
		std::cout << "impossible" << std::endl;
	else if (input_.compare("nanf") == 0 || input_.compare("nan") == 0)
		std::cout << "nanf" << std::endl;
	else if (input_.compare("+inf") == 0 || input_.compare("-inf") == 0)
		std::cout << input_ << std::endl;
	else if (input_.compare("+inff") == 0)
		std::cout << "+inf" << std::endl;
	else if (input_.compare("-inff") == 0)
		std::cout << "-inf" << std::endl;
	else{
		if (float_ - static_cast<int>(float_) == 0)
			std::cout << float_ << ".0f" << std::endl;
		else
			std::cout << float_ << "f" << std::endl;
	}
}

void ScalarConverter::printDouble() const
{
	if (somethingFailed_)
		std::cout << "impossible" << std::endl;
	else if (input_.compare("nanf") == 0 || input_.compare("nan") == 0)
		std::cout << "nan" << std::endl;
	else if (input_.compare("+inff") == 0 || input_.compare("-inff") == 0)
		std::cout << input_ << std::endl;
	else if (input_.compare("+inf") == 0)
		std::cout << "+inff" << std::endl;
	else if (input_.compare("-inf") == 0)
		std::cout << "-inff" << std::endl;
	else{
		if (double_ - static_cast<int>(double_) == 0)
			std::cout << double_ << ".0" << std::endl;
		else
			std::cout << double_ << std::endl;
	}
}

int ScalarConverter::getType() const
{
	return (type_);
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
