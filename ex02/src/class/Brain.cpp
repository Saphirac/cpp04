/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:29:03 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:51:24 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

// Constructors and destructor //

Brain::Brain(void)
{
	if (DEBUG)
		std::cout << "Brain constructor called\n";
}

Brain::Brain(Brain const &src)
{
	if (DEBUG)
		std::cout << "Brain copy constructor called\n";
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain::~Brain(void)
{
	if (DEBUG)
		std::cout << "Brain destructor called\n";
}

// Getter //

std::string	const	&Brain::get_ideas(int const i) const
{
	if (DEBUG)
		std::cout << "get_ideas() member function called\n";
	return this->_ideas[i];
}

// Operator //

Brain				&Brain::operator=(Brain const &src)
{
	if (DEBUG)
		std::cout << "Brain copy assignment operator called\n";
	if (this != &src)
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	return *this;
}
