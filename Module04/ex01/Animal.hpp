/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:38:20 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/05 19:05:25 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	// OCF
	Animal(void);
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal(void);
	// more constructors
	Animal(const std::string &type);

	// member function
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

class WrongAnimal
{
protected:
	std::string type;

public:
	// OCF
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal &operator=(const WrongAnimal &rhs);
	~WrongAnimal(void);
	// more constructors
	WrongAnimal(const std::string &type);

	// member function
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif /* ANIMAL_HPP */