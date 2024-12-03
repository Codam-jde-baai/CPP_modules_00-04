/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 19:22:04 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/03/14 13:14:26 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("ruby");

	diamond.whoAmI();
	diamond.attack("woody");
	diamond.guardGate();

	std::cout << "\n\n---------- What is required to run Diamond bad buy Ruby out of energy ----------\n\n"
			  << std::endl;
	for (int i = 0; i < 50; ++i)
	{
		diamond.beRepaired(5);
		diamond.attack("no one");
	}
	diamond.whoAmI();
	return (0);
}