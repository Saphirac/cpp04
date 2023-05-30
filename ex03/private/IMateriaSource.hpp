/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:47:19 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/30 17:57:41 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:

	IMateriaSource(void);
	IMateriaSource(IMateriaSource const &src);

	virtual ~IMateriaSource(void);

	virtual void		learnMateria(AMateria *m) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;

	IMateriaSource	&operator=(IMateriaSource const &src);

};

#endif
