/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:16:22 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:54:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private :

	Brain	*_brain;

public :

	Dog(void);
	Dog(std::string const &type);
	Dog(Dog const &src);

	virtual ~Dog(void);

	virtual void	makeSound(void) const;

	Dog		&operator=(Dog const &src);
};

#endif
