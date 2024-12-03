/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 19:22:04 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/14 13:32:40 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap one;
	ScavTrap two("Bab");
	two.attack("wwwwooooooooooooo");
	two.guardGate();
	two.attack("target");
	two.takeDamage(5);
	two.beRepaired(5);

	two.attack("target");
	two.takeDamage(5);
	two.takeDamage(110);
	two.takeDamage(5);
	two.takeDamage(5);
}