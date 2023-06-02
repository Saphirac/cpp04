/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:30:30 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:41:39 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

// Constructors and destructor //

MateriaSource::MateriaSource(void) :
IMateriaSource(),
_stock()
{
	if (DEBUG)
		std::cout << "MateriaSource constructor called\n";
}

MateriaSource::MateriaSource(MateriaSource const &src) : 
IMateriaSource()
{
	if (DEBUG)
		std::cout << "MateriaSource copy constructor called\n";
	for (int i = 0; i < 4; i++)
		if (src._stock[i])
			this->_stock[i] = src._stock[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
	if (DEBUG)
		std::cout << "MateriaSource destructor called\n";
	for (int i = 0; i < 4; i++)
		delete this->_stock[i];
}

// Getter //

std::string const	&MateriaSource::get_type(int const i) const
{
	static std::string const	empty = "empty";
	if (DEBUG)
		std::cout << "MateriaSource get_type() member function called\n";
	if (this->_stock[i])
		return this->_stock[i]->get_type();
	return empty;
}

// Mandatory functions //

void		MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;

	if (DEBUG)
		std::cout << "MateriaSource learnMateria() member function called\n";
	for ( ; this->_stock[i]; i++);
	if (i < 4)
		_stock[i] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (DEBUG)
		std::cout << "MateriaSource createMateria() member function called\n";
	for (int i = 0 ; i < 4 && this->_stock[i]; i++)
		if (!this->_stock[i]->get_type().compare(type))
			return this->_stock[i]->clone();
	return NULL;
}

// Operator //

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	if (DEBUG)
		std::cout << "MateriaSource copy assignment operator called\n";
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_stock[i];
			this->_stock[i] = NULL;
			if (src._stock[i])
				this->_stock[i] = src._stock[i]->clone();
		}
	}
	return *this;
}

