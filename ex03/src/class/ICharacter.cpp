/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:52:24 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 04:27:10 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include <iostream>

// Constructors and destructor //

ICharacter::ICharacter(void)
{
	if (DEBUG)
		std::cout << "ICharacter constructor called\n";
}

ICharacter::ICharacter(ICharacter const &src __attribute__((unused)))
{
	if (DEBUG)
		std::cout << "ICharacter copy constructor called\n";
}

ICharacter::~ICharacter(void)
{
	if (DEBUG)
		std::cout << "ICharacter destructor called\n";
}

// Operator //

ICharacter	&ICharacter::operator=(ICharacter const &src __attribute__((unused)))
{
	if (DEBUG)
		std::cout << "ICharacter copy assignment operator called\n";
	return *this;
}
