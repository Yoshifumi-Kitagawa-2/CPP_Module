/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:21 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/05 16:23:29 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &right);
		void makeSound() const;
};

#endif