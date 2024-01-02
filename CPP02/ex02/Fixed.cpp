/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:50:31 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/02 23:26:01 by yokitaga         ###   ########.fr       */
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
bool Fixed::comparisonOperatorBigger(const Fixed &right) const
{
	if (this->_fixedPointValue > right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::comparisonOperatorSmaller(const Fixed &right) const
{
	if (this->_fixedPointValue < right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::comparisonOperatorBiggerAndEqual(const Fixed &right) const
{
	if (this->_fixedPointValue >= right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::comparisonOperatorSmallerAndEqual(const Fixed &right) const
{
	if (this->_fixedPointValue <= right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::comparisonOperatorEqual(const Fixed &right) const
{
	if (this->_fixedPointValue == right.getRawBits())
		return (true);
	return (false);
}

bool Fixed::comparisonOperatorNotEqual(const Fixed &right) const
{
	if (this->_fixedPointValue != right.getRawBits())
		return (true);
	return (false);
}

//arithmeticOperator

Fixed Fixed::arithmeticOperatorPlus(const Fixed &right) const
{
	return (Fixed(this->toFloat() + right.toFloat()));
}

Fixed Fixed::arithmeticOperatorMinus(const Fixed &right) const
{
	return (Fixed(this->toFloat() - right.toFloat()));
}

Fixed Fixed::arithmeticOperatorTimes(const Fixed &right) const
{
	return (Fixed(this->toFloat() * right.toFloat()));
}

Fixed Fixed::arithmeticOperatorDivision(const Fixed &right) const
{
	return (Fixed(this->toFloat() / right.toFloat()));
}

//preIncrementOperator
Fixed &Fixed::preIncrementOperator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}

//postIncrementOperator
Fixed Fixed::postIncrementOperator++(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return (tmp);
}

//preDecrementOperator
Fixed &Fixed::preDecrementOperator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}

//postDecrementOperator
Fixed Fixed::postDecrementOperator--(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return (tmp);
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
