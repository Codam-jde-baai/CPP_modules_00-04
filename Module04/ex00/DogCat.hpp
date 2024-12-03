/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DogCat.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:38:11 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/05 18:56:33 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
#define DOGCAT_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	/* OCF */
	Dog(void);
	Dog(const Dog &src);
	Dog &operator=(const Dog &rhs);
	~Dog(void);
	/* member functions */
	void makeSound(void) const;
};

class Cat : public Animal
{
public:
	/* OCF */
	Cat(void);
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	~Cat(void);
	/* member functions */
	void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
public:
	/* OCF */
	WrongCat(void);
	WrongCat(const WrongCat &src);
	WrongCat &operator=(const WrongCat &rhs);
	~WrongCat(void);
	/* member functions */
	void makeSound(void) const;
};

#endif /* DOGCAT_HPP */
