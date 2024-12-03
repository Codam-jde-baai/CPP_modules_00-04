/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DogCat.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:38:11 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/07 13:23:35 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
#define DOGCAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

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
private:
	Brain *_brain;

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
