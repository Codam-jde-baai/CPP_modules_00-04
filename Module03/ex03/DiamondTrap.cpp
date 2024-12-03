/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 13:08:23 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2024/03/14 13:13:26 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/** constructors **/

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap: default constructor called" << std::endl;
	_name = "Default_diamond_name";
	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_ad = FragTrap::_ad; 
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap: copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	_name = rhs._name;
	_hp = rhs._hp;
	_energy = rhs._energy;
	_ad = rhs._ad;
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	std::cout << "DiamondTrap: name constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_ad = FragTrap::_ad;
}

/** end of constructors **/

/** member functions **/

void DiamondTrap::whoAmI()
{
	std::cout << "I am: " << _name << ", my Clap name is: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
