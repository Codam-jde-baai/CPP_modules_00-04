/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   actions.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 15:10:07 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/10 11:07:09 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "actions.hpp"
#include "phonebook.hpp"

void ft_add(PhoneBook &book)
{
	std::string input;
	Contact new_contact;

	std::cout << "\033[1;34mPlease input the information of the new contact\033[0m\n";
	std::cout << "\033[1;34mFirst name: \033[0m";
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "\033[31mInvalid input, returning to menu.\033[0m\n";
		return;
	}
	else
		new_contact.setFirstName(input);
	std::cout << "\033[1;34mLast name: \033[0m";
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "\033[31mInvalid input, returning to menu.\033[0m\n";
		return;
	}
	else
		new_contact.setLastName(input);
	std::cout << "\033[1;34mNickname: \033[0m";
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "\033[31mInvalid input, returning to menu.\033[0m\n";
		return;
	}
	else
		new_contact.setNickname(input);
	std::cout << "\033[1;34mPhone number: \033[0m";
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "\033[31mInvalid input, returning to menu.\033[0m\n";
		return;
	}
	else
		new_contact.setPhoneNumber(input);
	std::cout << "\033[1;34mDarkest secret: \033[0m";
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "\033[31mInvalid input, returning to menu.\033[0m\n";
		return;
	}
	else
		new_contact.setDarkestSecret(input);
	book.addContact(new_contact);
	std::cout << "\033[1;33mYour phonebook has been updated!\033[0m\n";
}

void ft_search(PhoneBook &book)
{
	std::string input;
	int index;

	book.print_all();
	std::cout << "\033[1;34mPlease input the index of the contact you would like to view\033[0m\n";
	std::cout << "\033[1;34mIndex: \033[0m";
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "\033[31mInvalid input, returning to menu.\033[0m\n";
		return;
	}
	else
	{
		for (size_t i = 0; i < input.length(); i++)
		{
			if (!isdigit(input[i]))
			{
				std::cout << "\033[31mNo numerical input, returning to menu.\033[0m\n";
				return;
			}
		}
		std::istringstream iss(input);
		iss >> index;
		index = index - 1;
		if (index < 0 || index > 7)
		{
			std::cout << "\033[31mInvalid input, returning to menu.\033[0m\n";
			return;
		}
		else
			book.print_contact(index);
	}

	(void)book;
}

/*
◦ Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line.
*/