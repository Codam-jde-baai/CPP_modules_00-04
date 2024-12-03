/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 14:05:31 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/09 16:26:16 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "Creating a zombie on the stack\n";
	Zombie zombie("Henk");
	zombie.announce();

	std::cout << "\n\n";

	std::cout << "Creating a zombie on the heap\n";
	Zombie *zombie_ptr = newZombie("Piet");
	zombie_ptr->announce();
	delete zombie_ptr;

	std::cout << "\n\n";

	std::cout << "Random Chump function call\n";
	randomChump("Klaas");

	std::cout << "\n\n";

	std::cout << "End of program\n";
	return (0);
}