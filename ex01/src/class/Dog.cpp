/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:56:54 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:43:45 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

// constructors and destructor //

Dog::Dog(void) :
Animal("Dog"),
_brain(new Brain)
{
	if (DEBUG)
		std::cout << "Dog constructor called\n";
}

Dog::Dog(std::string const &type) :
Animal(type),
_brain(new Brain)
{
	if (DEBUG)
		std::cout << "Dog constructor called\n";
}

Dog::Dog(Dog const &src) :
Animal(src),
_brain(new Brain(*src._brain))
{
	if (DEBUG)
		std::cout << "Dog copy constructor called\n";
}


Dog::~Dog(void)
{
	if (DEBUG)
		std::cout << "Dog destructor called\n";
	delete this->_brain;
}

// makeSound //

void		Dog::makeSound(void) const
{
	if (DEBUG)
		std::cout << "makeSound() member function called\n";
	std::cout << "* aboiements *\n";
}

// Operator //

Dog		&Dog::operator=(Dog const &src)
{
	if (DEBUG)
		std::cout << "Dog copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
