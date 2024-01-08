/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:08 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 18:37:06 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(Dog const &src);
		Dog &operator=(Dog const &right);
		~Dog();
		void makeSound() const;
};


#endif