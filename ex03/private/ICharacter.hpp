/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:56:54 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/30 17:38:17 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
# include "AMateria.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class AMateria;

class ICharacter
{
public:
	ICharacter(void);
	ICharacter(ICharacter const &src);

	virtual	~ICharacter(void);

	virtual std::string const	&get_name(void) const = 0;
	
	virtual void	equip(AMateria *m) = 0;
	virtual void	unequip(int i) = 0;
	virtual void	use(int i, ICharacter &target) = 0;

	ICharacter	&operator=(ICharacter const &src);
};


#endif
