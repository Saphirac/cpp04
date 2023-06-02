/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:12:04 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:04:28 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

// Constructors and destructor //

Ice::Ice(void) :
AMateria("ice")
{
	if (DEBUG)
		std::cout << "Ice constructor called\n";
}

Ice::Ice(Ice const &src) :
AMateria(src._type)
{
	if (DEBUG)
		std::cout << "Ice copy constructor called\n";
}

Ice::~Ice(void)
{
	if (DEBUG)
		std::cout << "Ice destructor called\n";
}

// Mandatory functions //

void	Ice::use(ICharacter &target)
{
	if (DEBUG)
		std::cout << "Ice use() member function called\n";
	std::cout << "* shoots an ice bolt at " << target.get_name() << " *\n";
}

Ice	*Ice::clone(void) const
{
	if (DEBUG)
		std::cout << "Ice clone() member function called\n";
	return new Ice(*this);
}

// Operator //

Ice	&Ice::operator=(Ice const &src)
{
	if (DEBUG)
		std::cout << "Ice copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
