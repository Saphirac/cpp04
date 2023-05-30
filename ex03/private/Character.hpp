/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:36:48 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/30 17:59:53 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private :

	std::string	_name;
	AMateria	*_inventory[4];

public :

	Character(std::string const &name);
	Character(Character const &src);

	virtual	~Character(void);

	std::string const	&get_name(void) const;
	std::string const	&get_type(int const i) const;

	Character	&operator=(Character const &src);
};

#endif
