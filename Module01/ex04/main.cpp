/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 15:08:46 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/11/16 13:04:43 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>

std::string findAndReplace(std::string line, std::string find, std::string replace)
{
	if (find == "")
		return line;
	size_t pos = 0;
	while ((pos = line.find(find, pos)) != std::string::npos)
	{
		line.erase(pos, find.length());
		line.insert(pos, replace);
		pos += find.length();
	}
	return line;
}

int main(int ac, char **av)
{
	std::string line;
	std::string new_file;

	if (ac != 4)
	{
		std::cout << "Incorrect input, please input:\nfilename - string_to_find - string_to_replace\n";
		return (1);
	}
	std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cout << "Failed to open: " << av[1] << ": " << std::strerror(errno);
		return (2);
	}
	new_file = av[1];
	new_file.append(".replace");
	std::ofstream outfile(new_file.c_str());
	if (!outfile)
	{
		std::cout << "Failed to open: " << new_file << ": " << std::strerror(errno);
		return (2);
	}
	while (std::getline(infile, line))
	{
		line = findAndReplace(line, av[2], av[3]);
		outfile << line << std::endl;
	}
	return 0;
}
