/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:49:50 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 11:43:20 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

# include <string>

class WrongAnimal 
{
protected :

	std::string	_type;

public :
	
	WrongAnimal(std::string const type);
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal(void);
	~WrongAnimal(void);
	
	std::string	get_type(void) const;
	
	void		set_type(std::string const type);
	void		makeSound(void) const;

	WrongAnimal		&operator=(WrongAnimal const &src);
};

#endif
