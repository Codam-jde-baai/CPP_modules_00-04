/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 16:28:57 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/10 11:08:54 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * The default constructor ( void constructor )
 */
Zombie::Zombie(void)
{
	std::cout << "Zombie created with no name(void constructor)\n";
}

/**
 * You can have multiple constructors
 * The program will take the right constructor based on the parameters
 */

/**
 * A second constructor ( string constructor )
 */
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " has been created\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has died (very sad moment)\n";
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
