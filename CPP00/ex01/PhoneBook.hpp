/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:32:43 by yokitaga          #+#    #+#             */
/*   Updated: 2023/10/09 17:38:51 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8

class PhoneBook
{
	public:
		PhoneBook(): index(0) {};
		void Add();
		void Search() const;
	private:
		int index;
		Contact contacts[MAX_CONTACTS];
		bool PrintAll() const;
};

#endif