/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 13:07:58 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/07 13:16:27 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain: copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain: deconstructor called" << std::endl;
}
