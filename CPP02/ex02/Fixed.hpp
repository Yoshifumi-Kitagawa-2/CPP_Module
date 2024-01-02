/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:50:34 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/02 13:13:12 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &right);
		~Fixed();

		bool comparisonOperatorBigger(const Fixed &right) const;
		bool comparisonOperatorSmaller(const Fixed &right) const;
		bool comparisonOperatorBiggerAndEqual(const Fixed &right) const;
		bool comparisonOperatorSmallerAndEqual(const Fixed &right) const;
		bool comparisonOperatorEqual(const Fixed &right) const;
		bool comparisonOperatorNotEqual(const Fixed &right) const;

		Fixed arithmeticOperatorPlus(const Fixed &right) const;
		Fixed arithmeticOperatorMinus(const Fixed &right) const;
		Fixed arithmeticOperatorTimes(const Fixed &right) const;
		Fixed arithmeticOperatorDivision(const Fixed &right) const;

		Fixed &preIncrementOperator++(void);
		Fixed postIncrementOperator++(int);
		Fixed &preDecrementOperator--(void);
		Fixed postDecrementOperator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif