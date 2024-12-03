/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 12:57:53 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2024/02/24 14:40:30 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	// constructors OCF
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap &src);
	DiamondTrap &operator=(const DiamondTrap &rhs);
	~DiamondTrap(void);
	// more constructors
	DiamondTrap(const std::string name);
	// member functions
	void whoAmI();
	void attack(std::string const &target);
};

#endif /* DIAMONDTRAP_HPP */