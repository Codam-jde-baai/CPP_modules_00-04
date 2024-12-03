/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 12:37:53 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/07 12:40:42 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain(void);
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
	~Brain();
};

#endif /* BRAIN_HPP */