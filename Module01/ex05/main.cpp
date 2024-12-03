/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 15:08:46 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/16 14:28:18 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl Karen;

	std::cout << "\033[1;34mDEBUG:\033[0m \n";
	Karen.complain("DEBUG");
	std::cout << "\n\n";

	std::cout << "\033[1;34mINFO:\033[0m \n";
	Karen.complain("INFO");
	std::cout << "\n\n";

	std::cout << "\033[1;34mWARNING:\033[0m \n";
	Karen.complain("WARNING");
	std::cout << "\n\n";

	std::cout << "\033[1;34mERROR:\033[0m \n";
	Karen.complain("ERROR");
	std::cout << "\n\n";

	std::cout << "\033[1;34munrelated input:\033[0m \n";
	Karen.complain("random input");
	std::cout << "\n\n";
}
