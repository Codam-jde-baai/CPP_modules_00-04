/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 19:22:04 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/14 13:31:15 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap first;
	ClapTrap second("Bob");

	first.attack("target");
	first.takeDamage(5);
	first.beRepaired(5);

	std::cout << "------------ killing the first one ------------" << std::endl;
	first.takeDamage(5);
	first.takeDamage(5);
	first.takeDamage(5);

	std::cout << "------------ run out of energy ------------" << std::endl;
	second.attack("Bab"); // 1
	second.beRepaired(5); // 2
	second.beRepaired(5); // 3
	second.beRepaired(5); // 4
	second.beRepaired(5); // 5
	second.beRepaired(5); // 6
	second.beRepaired(5); // 7
	second.beRepaired(5); // 8
	second.beRepaired(5); // 9
	second.beRepaired(5); // 10
	second.beRepaired(5); // 11
}