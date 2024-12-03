/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:38:23 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/05 19:05:03 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/** constructors OCF **/

Animal::Animal(void) : type("unknown species")
{
	std::cout << "AnimalClass: default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "AnimalClass: copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "AnimalClass: Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "AnimalClass: deconstructor called" << std::endl;
}

/** constructors **/

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "AnimalClass: type setting constructor called" << std::endl;
}

/** member functions **/

std::string Animal::getType(void) const
{
	return (this->type);
}

// virtual to achieve polymorphism
void Animal::makeSound(void) const
{
	std::cout << "Generic animal noises" << std::endl;
}

/** WRONG ANIMAL **/

/** constructors OCF **/

WrongAnimal::WrongAnimal(void) : type("unknown species")
{
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: deconstructor called" << std::endl;
}

/** constructors **/

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << "WrongAnimal: type setting constructor called" << std::endl;
}

/** member functions **/

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "\033[1;31mdefinitely not an animal\033[0m" << std::endl;
}
