/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 13:14:24 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/10 15:24:24 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << this->_name << " was born with just his fists to defend himself\n";
	return;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " died of old age, very sad\n";
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}

void HumanB::attack(void)
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " attacks with "
				  << "\033[31mthese hands\033[0m" << std::endl;
	}
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
