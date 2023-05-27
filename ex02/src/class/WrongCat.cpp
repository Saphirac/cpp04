/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:56:54 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 11:43:42 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

// constructors and destructor //

WrongCat::WrongCat(void) :
WrongAnimal("WrongCat")
{
	if (DEBUG)
		std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(std::string const &type) :
WrongAnimal(type)
{
	if (DEBUG)
		std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(WrongCat const &src) :
WrongAnimal(src)
{
	if (DEBUG)
		std::cout << "WrongCat copy constructor called\n";
}


WrongCat::~WrongCat(void)
{
	if (DEBUG)
		std::cout << "WrongCat destructor called\n";
}

// makeSound //

void		WrongCat::makeSound(void) const
{
	if (DEBUG)
		std::cout << "makeSound() member function called\n";
	std::cout << "* Wrong miaou *\n";
}

// Operator //

WrongCat		&WrongCat::operator=(WrongCat const &src)
{
	if (DEBUG)
		std::cout << "WrongCat copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return *this;
}
