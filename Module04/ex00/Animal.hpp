/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:38:20 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/21 11:19:09 by jde-baai      ########   odam.nl         */
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

/*
 When a class is intended to be used as a base class,
 making its destructor virtual ensures that the destructor of the derived class is called when an object of the derived class is deleted
  through a pointer to the base class.
This is essential for proper resource management and to avoid memory leaks
 or undefined behavior due to incomplete destruction of derived class objects.

Example:
Animal *MyGod = new Dog;
delete myDog;

this will call both the dogs and animals destructor where without the virtual keyword only the Animals destructor would be called.

*/