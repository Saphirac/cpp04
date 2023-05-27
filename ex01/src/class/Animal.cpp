/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:56:54 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 11:43:29 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// constructors and destructor //

Animal::Animal(std::string const type) :
_type(type)
{
	if (DEBUG)
		std::cout << "Animal constructor called\n";
}

Animal::Animal(Animal const &src) :
_type(src._type)
{
	if (DEBUG)
		std::cout << "Animal copy constructor called\n";
}

Animal::Animal(void) :
_type ("Default")
{
	if (DEBUG)
		std::cout << "Animal constructor called\n";
}

Animal::~Animal(void)
{
	if (DEBUG)
		std::cout << "Animal destructor called\n";
}

// getter and setter //

std::string	Animal::get_type(void) const
{
	if (DEBUG)
		std::cout << "get_type() member function called\n";
	return this->_type;
}

void		Animal::set_type(std::string const type)
{
	if (DEBUG)
		std::cout << "set_type() member function called\n";
	this->_type = type;
}

// makeSound //

void		Animal::makeSound(void) const
{
	if (DEBUG)
		std::cout << "makeSound() member function called\n";
	std::cout << "* Random animal sound. *\n";
}

// Operator //

Animal		&Animal::operator=(Animal const &src)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
