/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DogCat.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:38:04 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/21 12:34:25 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

/** OCF consutructors **/

Dog::Dog()
{
	std::cout << "Dog: constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = new Brain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called" << std::endl;
	delete _brain;
}

/** member functoins **/

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}

/***************************************** cat ******************************************/

/** OCF constructors **/

Cat::Cat()
{
	std::cout << "Cat: constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat: assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = new Brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
	delete _brain;
}

/** member functions **/

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

/***************************************** WrongCat ******************************************/

/** OCF constructors **/

WrongCat::WrongCat()
{
	std::cout << "WrongCat: constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat: copy constructor called" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Unbearable screeching" << std::endl;
}
