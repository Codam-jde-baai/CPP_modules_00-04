/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:38:17 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/07 15:10:29 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "DogCat.hpp"
#include "Brain.hpp"

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << std::endl;
		j->makeSound();
		std::cout << i->getType() << std::endl;
		i->makeSound();

		delete j;
		delete i;
	}
	{
		std::cout << "\n--------------- more tests---------------" << std::endl;
		int i;
		const int len = 6;
		Animal *array[len];

		for (i = 0; i < len / 2; ++i)
		{
			array[i] = new Dog();
		}
		for (i = 3; i < len; ++i)
		{
			array[i] = new Cat();
		}
		std::cout << "-------------- animal noises ---------------" << std::endl;
		for (i = 0; i < len; ++i)
		{
			std::cout << array[i]->getType() << ": ";
			array[i]->makeSound();
			std::cout << std::endl;
		}
		for (i = 0; i < len; ++i)
		{
			delete array[i];
		}
	}
	{
		std::cout << " ----------- abstract ----------- " << std::endl;
		// Animal abstract;  << wont compile
		const Animal &temp = Dog(); // << is possible because it immediately uses a dog
		temp.makeSound();
		std::cout << " ------ ptr ----- " << std::endl;
		Animal *ptr;
		// ptr->makeSound(); --> doesnt work cause would be unitialized
		ptr = new Cat();
		ptr->makeSound();

		delete ptr;
		std::cout << " ------ auto remove ref ----- " << std::endl;
	}
	return 0;
}