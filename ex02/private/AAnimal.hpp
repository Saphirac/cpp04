/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:49:50 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 13:08:38 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

# include <string>

class AAnimal 
{
protected :

	std::string	_type;

public :
	
	AAnimal(std::string const type);
	AAnimal(AAnimal const &src);
	AAnimal(void);
	virtual ~AAnimal(void);
	
	std::string		get_type(void) const;
	
	void			set_type(std::string const type);
	virtual void	makeSound(void) const = 0;

	AAnimal			&operator=(AAnimal const &src);
};

#endif
