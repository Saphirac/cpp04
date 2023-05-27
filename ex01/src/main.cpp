/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:37:02 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:55:17 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal	*meta[100];
	size_t	i = 0;

	for ( ; i < 50; i++)
		meta[i] = new Cat();
	for ( ; i < 100; i++)
		meta[i] = new Dog();
	for (i = 0; i < 100; i++)
		meta[i]->makeSound();
	
	for (i = 0; i < 100; i++)
		delete meta[i];

	return 0;
}
