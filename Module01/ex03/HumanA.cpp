/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 12:57:05 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/10 15:31:11 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << this->_name << " Was born with access to " << this->_weapon.getType() << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " died of old age, very sad\n";
	return;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
