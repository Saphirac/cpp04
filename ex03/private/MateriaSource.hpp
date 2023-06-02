/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:51:29 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:40:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	
	AMateria	*_stock[4];

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	
	virtual	~MateriaSource();

	std::string const	&get_type(int const i) const;

	void		learnMateria(AMateria *m);
	AMateria	*createMateria(std::string const &type);

	MateriaSource	&operator=(MateriaSource const &src);
};

# endif
