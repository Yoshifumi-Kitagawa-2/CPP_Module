/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:21 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/28 00:02:35 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {
	private:
		Brain *brain_;
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &right);
		~Cat();
		void makeSound() const;
};

#endif