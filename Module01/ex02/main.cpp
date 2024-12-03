/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 11:27:01 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/10 11:48:12 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address held by *strPtr: " << strPtr << std::endl;
	std::cout << "Memory address held by &strRef: " << &strRef << std::endl;

	std::cout << "\n\n";

	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed to by *strPtr: " << *strPtr << std::endl;
	std::cout << "Value pointed to by &strRef: " << strRef << std::endl;
	// end of assignment

	/*
	std::cout << "\n\n";
	str = "Changed string1 value";
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed to by *strPtr: " << *strPtr << std::endl;
	std::cout << "Value pointed to by &strRef: " << strRef << std::endl;

	std::cout << "\n\n";
	*strPtr = "Changed string1 value through ptr";
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed to by *strPtr: " << *strPtr << std::endl;
	std::cout << "Value pointed to by &strRef: " << strRef << std::endl;

	std::cout << "\n\n";
	strRef = "Changed string1 value through ref";
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed to by *strPtr: " << *strPtr << std::endl;
	std::cout << "Value pointed to by &strRef: " << strRef << std::endl;

	std::cout << "\n\n";
	std::string str2 = "String2 content";

	std::cout << "Assigned the ptr with the address of str2" << std::endl;
	strPtr = &str2;

	std::cout << "Value of the original string variable: " << str << std::endl;
	std::cout << "Value of the stirng2 variable: " << str2 << std::endl;
	std::cout << "Value pointed to by *strPtr: " << *strPtr << std::endl;
	std::cout << "Value pointed to by &strRef: " << strRef << std::endl;

	std::cout << "\n\n";
	std::cout << "Assigned the ref with the address of str2" << std::endl;
	strRef = str2;
	std::cout << "Value of original string variable: " << str << std::endl;
	std::cout << "Value of the stirng2 variable: " << str2 << std::endl;
	std::cout << "Value pointed to by ptr: " << *strPtr << std::endl;
	std::cout << "Value pointed to by ref: " << strRef << std::endl;

	std::cout << "\n\n";
	std::cout << "Changing the string pointed to by ref changed\nthe value of the original string\n";

	std::cout << "\nEnd of additoinal tests\n";
	*/

	return (0);
}