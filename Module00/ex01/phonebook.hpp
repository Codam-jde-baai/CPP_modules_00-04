/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:26:04 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/11/08 15:33:21 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int size;

public:
	PhoneBook(void);
	~PhoneBook(void);

	void addContact(Contact contact);
	void print_all(void);
	void print_contact(int index);
};

#endif /* !PHONEBOOK_HPP */