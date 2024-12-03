/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:08:24 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/02/21 14:33:21 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

public:
	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);
	Fixed(const int input);
	Fixed(const float input);
	Fixed &operator=(const Fixed &fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif /* !FIXED_HPP */

/*
 Default constructor
• Copy constructor -> intialize the object with the value of the object passed as parameter
• Copy assignment operator -> copy the state of one object to another
• Destructor
*/
