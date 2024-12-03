/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 15:08:46 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/16 15:10:21 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please input one string\n";
		return 1;
	}
	Harl Karen;
	Karen.complain(av[1]);
	return 0;
}
