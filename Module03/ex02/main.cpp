/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 19:22:04 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/14 13:37:16 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap one;
	FragTrap two("Bob");
	FragTrap three("Bab");

	two.attack("Bab");

	three.attack("Bob");
	three.attack("target");
	three.beRepaired(5);
	three.attack("target");
	three.takeDamage(100);
	three.takeDamage(5);
	three.takeDamage(5);
	return (0);
}