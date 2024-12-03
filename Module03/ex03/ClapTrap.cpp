/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 19:02:18 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/14 13:36:06 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default_clap_name"), _hp(10), _energy(10), _ad(0)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_ad = rhs._ad;
	}
	return (*this);
}

ClapTrap::ClapTrap(const std::string &name) : _hp(10), _energy(10), _ad(0)
{
	std::cout << "ClapTrap: Name setting constructor called" << std::endl;
	this->_name = name;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap: " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap: " << this->_name << " attacks " << target << " causing " << this->_ad << " points of damage!" << std::endl;
	this->_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap: " << this->_name << " is already dead, stop hitting" << std::endl;
		return;
	}
	this->_hp -= amount;
	std::cout << "ClapTrap: " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap: " << this->_name << " dies " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap: " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap: " << this->_name << " is repaired for " << amount << " points!" << std::endl;
	this->_hp += amount;
	this->_energy -= 1;
}