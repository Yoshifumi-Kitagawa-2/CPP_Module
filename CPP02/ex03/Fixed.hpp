/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:50:34 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 00:35:28 by yokitaga         ###   ########.fr       */
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

		bool	operator>(const Fixed &right) const;
		bool	operator<(const Fixed &right) const;
		bool	operator>=(const Fixed &right) const;
		bool	operator<=(const Fixed &right) const;
		bool	operator==(const Fixed &right) const;
		bool	operator!=(const Fixed &right) const;

		Fixed 	operator+(const Fixed &right) const;
		Fixed 	operator-(const Fixed &right) const;
		Fixed 	operator*(const Fixed &right) const;
		Fixed 	operator/(const Fixed &right) const;

		Fixed&	operator++(void);
		Fixed 	operator++(int);
		Fixed&	operator--(void);
		Fixed 	operator--(int);

		static Fixed &min(Fixed &left, Fixed &right);
		static const Fixed &min(const Fixed &left, const Fixed &right);
		static Fixed &max(Fixed &left, Fixed &right);
		static const Fixed &max(const Fixed &left, const Fixed &right);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif