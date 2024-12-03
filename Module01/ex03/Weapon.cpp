/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 12:17:30 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/10 15:27:49 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string &Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}
