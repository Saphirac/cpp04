/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:56:54 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 13:00:50 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

// constructors and destructor //

AAnimal::AAnimal(std::string const type) :
_type(type)
{
	if (DEBUG)
		std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal(AAnimal const &src) :
_type(src._type)
{
	if (DEBUG)
		std::cout << "AAnimal copy constructor called\n";
}

AAnimal::AAnimal(void) :
_type ("Default")
{
	if (DEBUG)
		std::cout << "AAnimal constructor called\n";
}

AAnimal::~AAnimal(void)
{
	if (DEBUG)
		std::cout << "AAnimal destructor called\n";
}

// getter and setter //

std::string	AAnimal::get_type(void) const
{
	if (DEBUG)
		std::cout << "get_type() member function called\n";
	return this->_type;
}

void		AAnimal::set_type(std::string const type)
{
	if (DEBUG)
		std::cout << "set_type() member function called\n";
	this->_type = type;
}

// makeSound //

void		AAnimal::makeSound(void) const
{
	if (DEBUG)
		std::cout << "makeSound() member function called\n";
	std::cout << "* Random AAnimal sound. *\n";
}

// Operator //

AAnimal		&AAnimal::operator=(AAnimal const &src)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
