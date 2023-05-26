/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:16:22 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 00:25:53 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public :

	Dog(void);
	Dog(std::string const &type);
	Dog(Dog const &src);

	~Dog(void);

	void	makeSound(void);

	Dog		&operator=(Dog const &src);
};

#endif
