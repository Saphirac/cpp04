/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:12:04 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:04:04 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

// Constructors and destructor //

Cure::Cure(void) :
AMateria("cure")
{
	if (DEBUG)
		std::cout << "Cure constructor called\n";
}

Cure::Cure(Cure const &src) :
AMateria(src._type)
{
	if (DEBUG)
		std::cout << "Cure copy constructor called\n";
}

Cure::~Cure(void)
{
	if (DEBUG)
		std::cout << "Cure destructor called\n";
}

// Mandatory functions //

void	Cure::use(ICharacter &target)
{
	if (DEBUG)
		std::cout << "Cure use() member function called\n";
	std::cout << "* heals " << target.get_name() << "'s wounds *\n";
}

Cure	*Cure::clone(void) const
{
	if (DEBUG)
		std::cout << "Cure clone() member function called\n";
	return new Cure(*this);
}

// Operator //

Cure	&Cure::operator=(Cure const &src)
{
	if (DEBUG)
		std::cout << "Cure copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
