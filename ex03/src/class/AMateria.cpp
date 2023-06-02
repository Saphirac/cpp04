/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:58:47 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:03:51 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

// Constructors and destructor //

AMateria::AMateria(std::string const &type) :
_type(type)
{
	if (DEBUG)
		std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(AMateria const &src) :
_type(src._type)
{
	if (DEBUG)
		std::cout << "AMateria copy constructor called\n";
}

AMateria::~AMateria(void)
{
	if (DEBUG)
		std::cout << "AMateria destructor called\n";
}

// Getter //

std::string const	&AMateria::get_type(void) const
{
	if (DEBUG)
		std::cout << "AMateria get_type() member function called\n";
	return this->_type;
}

// Mandatory function //

void		AMateria::use(ICharacter &target)
{
	if (DEBUG)
		std::cout << "AMateria use() member function called\n";
	std::cout << "* uses " << this->_type << " on " << target.get_name() << '\n';
}

// Operator //

AMateria	&AMateria::operator=(AMateria const &src)
{
	if (DEBUG)
		std::cout << "AMateria copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
