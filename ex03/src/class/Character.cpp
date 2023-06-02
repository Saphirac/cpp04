/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:08:40 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:41:44 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

// Constructors and destructor //

Character::Character(std::string const &name) :
ICharacter(),
_name(name),
_inventory()
{
	if (DEBUG)
		std::cout << "Character constructor called\n";
}

Character::Character(Character const &src) :
ICharacter(),
_name(src._name)
{
	if (DEBUG)
		std::cout << "Character copy constructor called\n";
	for (int i = 0; i < 4; i++)
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
}

Character::~Character()
{
	if (DEBUG)
		std::cout << "Character destructor called\n";
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

// Getters //

std::string const	&Character::get_name(void) const
{
	if (DEBUG)
		std::cout << "get_name() member function called\n";
	return this->_name;
}

std::string const	&Character::get_slot_type(int const i) const
{
	static std::string const	empty = "empty";
	if (DEBUG)
		std::cout << "get_slot_type() member function called\n";
	if (this->_inventory[i])
		return this->_inventory[i]->get_type();
	return empty;
}

AMateria const	*Character::get_slot(int const i) const
{
	if (DEBUG)
		std::cout << "get_slot() member function called\n";
	if (this->_inventory[i])
		return this->_inventory[i];
	return NULL;
}

// Mandatory functions //

void	Character::equip(AMateria *m)
{
	int	i = 0;
	if (DEBUG)
		std::cout << "Character equip() member function called\n";
	for (; this->_inventory[i] ; i++);
	if (i < 4)
		this->_inventory[i] = m;
}


void	Character::unequip(int i)
{
	if (DEBUG)
		std::cout << "Character unequip() member function called\n";
	//delete this->_inventory[i];
	this->_inventory[i] = NULL;
}

void	Character::use(int i, ICharacter &target)
{
	if (DEBUG)
		std::cout << "Character use() member function called\n";
	if (this->_inventory[i])
		this->_inventory[i]->use(target);
}

// Operator //

Character	&Character::operator=(Character const &src)
{
	if (DEBUG)
		std::cout << "Character copy assignment operator called\n";
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return *this;
}
