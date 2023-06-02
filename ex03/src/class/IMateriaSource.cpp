/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:25:30 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 04:30:22 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include <iostream>

// Constructors and destructor //

IMateriaSource::IMateriaSource(void)
{
	if (DEBUG)
		std::cout << "IMateriaSource constructor called\n";
}

IMateriaSource::IMateriaSource(IMateriaSource const &src __attribute__((unused)))
{
	if (DEBUG)
		std::cout << "IMateriaSource copy constructor called\n";
}

IMateriaSource::~IMateriaSource(void)
{
	if (DEBUG)
		std::cout << "IMateriaSource destructor called\n";
}

// Operator //

IMateriaSource	&IMateriaSource::operator=(IMateriaSource const &src __attribute__((unused)))
{
	if (DEBUG)
		std::cout << "IMateriaSource copy assignment operator called\n";
	return *this;
}

