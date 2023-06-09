/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:49:50 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:54:36 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

# include <string>

class Animal 
{
protected :

	std::string	_type;

public :
	
	Animal(std::string const type);
	Animal(Animal const &src);
	Animal(void);
	virtual ~Animal(void);
	
	std::string		get_type(void) const;
	
	void			set_type(std::string const type);
	virtual void	makeSound(void) const;

	Animal			&operator=(Animal const &src);
};

#endif
