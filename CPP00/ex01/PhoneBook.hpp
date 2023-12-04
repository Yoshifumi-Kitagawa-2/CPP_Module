/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:32:43 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/04 23:59:39 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

#include <Contact.hpp>

class PhoneBook
{
private: 
	int		index;
	Contact contacts[MAX_CONTACTS];
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	void	exit();
}

PhoneBook::PhoneBook():index(0){}

#endif