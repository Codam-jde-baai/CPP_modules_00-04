/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 18:34:29 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/02/22 16:33:26 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HH
#define CLAPTRAP_HH

#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	int _hp;
	int _energy;
	int _ad;

public:
	// OCF
	ClapTrap(void);
	ClapTrap(const ClapTrap &src);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap(void);
	// more constructors
	ClapTrap(const std::string &name);

	// members n stuff
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif /* CLAPTRAP_HH */