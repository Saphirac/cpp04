/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:46:17 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/30 17:38:11 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class ICharacter;

class AMateria
{
protected :

	std::string	_type;

public :

	AMateria(std::string const &type);
	AMateria(AMateria const &src);

	virtual	~AMateria(void);

	std::string const	&get_type(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

	AMateria	&operator=(AMateria const &src);
};

#endif
