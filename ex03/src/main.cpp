/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:59:43 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:46:53 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	IMateriaSource	*src = new MateriaSource();
	Character	me("me");
	AMateria	*tmp;
	ICharacter	*bob = new Character("bob");
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	me.equip(tmp);
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	me.equip(tmp);
	bob->equip(tmp);
	me.use(0, *bob);
	me.use(1, *bob);
	bob->use(0, me);
	bob->use(1, me);
	bob->unequip(0);
	bob->unequip(1);
	bob->use(0, me);

	std::cout << "me : inventory 2 : " << me.get_slot_type(0) << '\n';

	delete bob;
	delete src;
	return 0;
}

/*int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
} */
