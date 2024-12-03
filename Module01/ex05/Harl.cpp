/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:10:59 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/16 15:05:20 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

enum ComplainEnum
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

std::map<std::string, ComplainEnum> createMap()
{
	std::map<std::string, ComplainEnum> stringToComplainEnum;
	stringToComplainEnum["DEBUG"] = DEBUG;
	stringToComplainEnum["INFO"] = INFO;
	stringToComplainEnum["WARNING"] = WARNING;
	stringToComplainEnum["ERROR"] = ERROR;
	return stringToComplainEnum;
}

int getComplainEnum(const std::string &level)
{
	std::map<std::string, ComplainEnum> stringToComplainEnum = createMap();

	std::map<std::string, ComplainEnum>::iterator it = stringToComplainEnum.find(level);
	if (it != stringToComplainEnum.end())
	{
		return static_cast<int>(it->second);
	}
	else
	{
		return -1;
	}
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*FuncPtr)(void);
	FuncPtr func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int logLevel = getComplainEnum(level);

	switch (logLevel)
	{
	case DEBUG:
		(this->*func[DEBUG])();
		break;
	case INFO:
		(this->*func[INFO])();
		break;
	case WARNING:
		(this->*func[WARNING])();
		break;
	case ERROR:
		(this->*func[ERROR])();
		break;
	default:
		std::cout << "Unknown complaint: " << level << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable!\nI want to speak to the manager now.\n";
}
