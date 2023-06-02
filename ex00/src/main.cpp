/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:37:02 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:57:11 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	WrongAnimal		*WrongA = new WrongAnimal();
	WrongAnimal		*WrongC = new WrongCat();

	std::cout << j->get_type() << " \n";
	std::cout << i->get_type() << " \n";
	std::cout << WrongA->get_type() << " \n";
	std::cout << WrongC->get_type() << " \n";
	std::cout << meta->get_type() << " \n";

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	WrongA->makeSound();
	WrongC->makeSound();

	delete meta;
	delete i;
	delete j;
	delete WrongA;
	delete WrongC;
	
	return 0;
}
