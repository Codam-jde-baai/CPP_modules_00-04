/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 19:51:21 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/02/24 13:02:46 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/** constructors **/

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	_hp = 100;
	_energy = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap: name constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_energy = 50;
	_ad = 20;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << _name << " is now in gatekeeper mode" << std::endl;
}
