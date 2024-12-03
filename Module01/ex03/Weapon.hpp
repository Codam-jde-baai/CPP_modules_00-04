/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 12:00:01 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/10 15:28:01 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	std::string const &getType(void);
	void setType(std::string type);
};

#endif /* !WEAPON_HPP */