/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 16:27:48 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/09 16:52:07 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);
	void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif /* !ZOMBIE_HPP */