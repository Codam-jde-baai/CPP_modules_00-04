/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 16:26:42 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/09 16:54:22 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *zombies = zombieHorde(N, "Henk");

	std::cout << "\n\n A bunch of Zombies called Henk have been created\n\n";

	std::cout << "Announcing the zombies\n";

	for (int i = 0; i < N; i++)
		zombies[i].announce();

	std::cout << "\n Changing the name of zombie 2 to Piet\n\n";

	zombies[2].setName("Piet");

	std::cout << "Announcing the zombies\n";

	for (int i = 0; i < N; i++)
		zombies[i].announce();

	std::cout << "\n\n Deleting the zombies\n\n";
	delete[] zombies;
}