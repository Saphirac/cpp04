/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:56:54 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 13:03:53 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

// constructors and destructor //

Cat::Cat(void) :
AAnimal("Cat"),
_brain(new Brain)
{
	if (DEBUG)
		std::cout << "Cat constructor called\n";
}

Cat::Cat(std::string const &type) :
AAnimal(type),
_brain(new Brain)
{
	if (DEBUG)
		std::cout << "Cat constructor called\n";
}

Cat::Cat(Cat const &src) :
AAnimal(src),
_brain(new Brain(*src._brain))
{
	if (DEBUG)
		std::cout << "Cat copy constructor called\n";
}


Cat::~Cat(void)
{
	if (DEBUG)
		std::cout << "Cat destructor called\n";
	delete this->_brain;
}

// makeSound //

void		Cat::makeSound(void) const
{
	if (DEBUG)
		std::cout << "makeSound() member function called\n";
	std::cout << "* Miaou miaou miaou *\n";
}

// Operator //

Cat		&Cat::operator=(Cat const &src)
{
	if (DEBUG)
		std::cout << "Cat copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
