/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:50:31 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 00:34:07 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor&destructor
Fixed::Fixed()
{
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int num)
{
	this->_fixedPointValue = num << this->_fractionalBits;
}

Fixed::Fixed(const float num)
{
	this->_fixedPointValue = roundf(num * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &right)
{
	if (this != &right)
		this->_fixedPointValue = right.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

//comparisonOperator
bool Fixed::operator>(const Fixed &right) const
{
	if (this->_fixedPointValue > right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &right) const
{
	if (this->_fixedPointValue < right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &right) const
{
	if (this->_fixedPointValue >= right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &right) const
{
	if (this->_fixedPointValue <= right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &right) const
{
	if (this->_fixedPointValue == right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &right) const
{
	if (this->_fixedPointValue != right.getRawBits())
		return (true);
	return (false);
}

//arithmeticOperator
Fixed Fixed::operator+(const Fixed &right) const
{
	return (Fixed(this->toFloat() + right.toFloat()));
}

Fixed Fixed::operator-(const Fixed &right) const
{
	return (Fixed(this->toFloat() - right.toFloat()));
}

Fixed Fixed::operator*(const Fixed &right) const
{
	return (Fixed(this->toFloat() * right.toFloat()));
}

Fixed Fixed::operator/(const Fixed &right) const
{
	return (Fixed(this->toFloat() / right.toFloat()));
}

//Increment/decrementOperator
//前置インクリメント
Fixed &Fixed::operator++(void)
{
	this->_fixedPointValue += 1 << this->_fractionalBits;
	return (*this);
}

//後置インクリメント
//引数 int が渡され、コンパイラはそれを利用して後置インクリメント演算子を呼び出すことを識別
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue += 1 << this->_fractionalBits;
	return (tmp);
}

//前置デクリメント
Fixed &Fixed::operator--(void)
{
	this->_fixedPointValue -= 1 << this->_fractionalBits;
	return (*this);
}

//後置デクリメント
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue -= 1 << this->_fractionalBits;
	return (tmp);
}

//min&max
Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	std::cout << "[non const ver min function called]" << std::endl;
	if (left.getRawBits() < right.getRawBits())
		return (left);
	return (right);
}

const Fixed &Fixed::min(const Fixed &left, const Fixed &right)
{
	std::cout << "[const ver min function called]" << std::endl;
	if (left.getRawBits() < right.getRawBits())
		return (left);
	return (right);
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	std::cout << "[non const max function called]" << std::endl;
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}

const Fixed &Fixed::max(const Fixed &left, const Fixed &right)
{
	std::cout << "[const ver max function called]" << std::endl;
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
