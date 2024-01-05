/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:08 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/05 17:43:42 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(Dog const &src);
		Dog &operator=(Dog const &right);
		void makeSound() const;
};


#endif