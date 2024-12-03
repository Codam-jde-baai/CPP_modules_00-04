/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:25:12 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/11/08 15:36:12 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "actions.hpp"

void ft_welcome(void)
{
	std::cout << "🬆🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬂🬊\n";
	std::cout << "🬄 \033[1;34mWelcome to the phonebook!\033[0m            🬄\n";
	std::cout << "🬄 \033[1;32mYou can use the following commands:\033[0m  🬄\n";
	std::cout << "🬄 ➕   \033[1;33madd: add a new contact\033[0m          🬄\n";
	std::cout << "🬄 🔍   \033[1;33msearch: search for a contact\033[0m    🬄\n";
	std::cout << "🬄 🚪   \033[1;33mexit: exit the phonebook\033[0m        🬄\n";
	std::cout << "🬌🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬋🬍\n";
}

int main()
{
	std::string input;
	PhoneBook book;
	ft_welcome();
	while (1)
	{
		std::cout << "\033[1;33m> \033[0m";
		std::getline(std::cin, input);
		if (input == "add")
			ft_add(book);
		else if (input == "search")
			ft_search(book);
		else if (input == "exit")
			break;
		else
			std::cout << "Invalid command. Please try again.\n";
	}
	return (0);
}
