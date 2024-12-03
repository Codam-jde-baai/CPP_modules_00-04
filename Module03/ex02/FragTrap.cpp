/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 19:51:21 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/14 13:04:00 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/** constructors **/

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	ClapTrap::_hp = 100;
	_hp = ClapTrap::_hp;
	_energy = 100;
	_ad = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap: name constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_energy = 100;
	_ad = 30;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << _name << " invites you to High Five" << std::endl;
}
