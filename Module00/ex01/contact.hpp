/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:26:11 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/11/09 12:22:20 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact(void);
	~Contact(void);

	std::string getFirstName() const;
	void setFirstName(const std::string &firstName);

	std::string getLastName() const;
	void setLastName(const std::string &lastName);

	std::string getNickname() const;
	void setNickname(const std::string &nickname);

	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);

	std::string getDarkestSecret() const;
	void setDarkestSecret(const std::string &darkestSecret);
};

#endif /* !CONTACT_HPP */