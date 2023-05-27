/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:37:02 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 13:09:00 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>


int	main(void)
{
	//AAnimal const	*meta = new AAnimal();
	AAnimal const	*rumba = new Dog();
	AAnimal const	*norminet = new Cat();

	std::cout << rumba->get_type() << '\n';
	std::cout << norminet->get_type() << '\n';

	delete norminet;
	delete rumba;
	//delete meta;
	return 0;
}
