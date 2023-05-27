/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:56:54 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:10:46 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

// constructors and destructor //

WrongAnimal::WrongAnimal(std::string const type) :
_type(type)
{
	if (DEBUG)
		std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) :
_type(src._type)
{
	if (DEBUG)
		std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::WrongAnimal(void) :
_type ("WrongDefault")
{
	if (DEBUG)
		std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal(void)
{
	if (DEBUG)
		std::cout << "WrongAnimal destructor called\n";
}

// getter and setter //

std::string	WrongAnimal::get_type(void) const
{
	if (DEBUG)
		std::cout << "get_type() member function called\n";
	return this->_type;
}

void		WrongAnimal::set_type(std::string const type)
{
	if (DEBUG)
		std::cout << "set_type() member function called\n";
	this->_type = type;
}

// makeSound //

void		WrongAnimal::makeSound(void) const
{
	if (DEBUG)
		std::cout << "makeSound() member function called\n";
	std::cout << "* WrongAnimal sound. *\n";
}

// Operator //

WrongAnimal		&WrongAnimal::operator=(WrongAnimal const &src)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
