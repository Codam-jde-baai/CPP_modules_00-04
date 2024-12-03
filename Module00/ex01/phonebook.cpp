/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 12:36:09 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/17 15:18:11 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->size = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::addContact(Contact contact)
{
	if (this->size < 8)
	{
		this->contacts[this->size] = contact;
		this->size++;
	}
	else
	{
		this->contacts[0] = contact;
		std::cout << "\033[1;33mPhonebook is full. The oldest contact has been replaced by the new contact.\033[0m" << std::endl;
	}
}

/**
 * @brief Adds a dot to the end of a string if the string is longer than the width.
 */
std::string add_dot(std::string str, size_t width)
{
	if (str.length() > width)
	{
		str = str.substr(0, width - 1) + ".";
	}
	return str;
}

void PhoneBook::print_all(void)
{
	std::cout << "     index|first name| last name|  nickname\n";
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		if (i >= this->size)
		{
			std::cout << "----------"
					  << "|";
			std::cout << "----------"
					  << "|";
			std::cout << "----------" << std::endl;
		}
		else
		{
			std::cout << std::setw(10) << add_dot(this->contacts[i].getFirstName(), 10) << "|";
			std::cout << std::setw(10) << add_dot(this->contacts[i].getLastName(), 10) << "|";
			std::cout << std::setw(10) << add_dot(this->contacts[i].getNickname(), 10) << std::endl;
		}
	}
}

void PhoneBook::print_contact(int index)
{
	if (size == 0)
	{
		std::cout << "\033[31mThe Phonebook is empty\033[0m\n";
		return;
	}
	if (index > this->size - 1)
	{
		std::cout << "\033[31mThere is no contact at this index.\033[0m\n";
		return;
	}
	std::cout << "\033[34mFirst name: \033[0m" << this->contacts[index].getFirstName() << std::endl;
	std::cout << "\033[34mLast name: \033[0m" << this->contacts[index].getLastName() << std::endl;
	std::cout << "\033[34mNickname: \033[0m" << this->contacts[index].getNickname() << std::endl;
	std::cout << "\033[34mPhone number: \033[0m" << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << "\033[34mDarkest secret: \033[0m" << this->contacts[index].getDarkestSecret() << std::endl;
}
