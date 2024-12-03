/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:08:24 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/02/09 14:45:53 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

public:
	Fixed(void);
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &fixed);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif /* !FIXED_HPP */

/*
 Default constructor
• Copy constructor -> intialize the object with the value of the object passed as parameter
• Copy assignment operator -> copy the state of one object to another
• Destructor
*/