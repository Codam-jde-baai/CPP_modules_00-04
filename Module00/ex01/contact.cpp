/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:26:13 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/11/09 12:16:35 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string Contact::getFirstName() const
{
	return this->first_name;
}

void Contact::setFirstName(const std::string &firstName)
{
	this->first_name = firstName;
}

std::string Contact::getLastName() const
{
	return this->last_name;
}

void Contact::setLastName(const std::string &lastName)
{
	this->last_name = lastName;
}

std::string Contact::getNickname() const
{
	return this->nickname;
}

void Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

std::string Contact::getPhoneNumber() const
{
	return this->phone_number;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->phone_number = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkest_secret = darkestSecret;
}

std::string Contact::getDarkestSecret() const
{
	return this->darkest_secret;
}
