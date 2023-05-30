/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:02:17 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/30 17:36:16 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(std::string const &type);
	Cure(Cure const &src);

	virtual	~Cure(void);

	void	use(ICharacter &target);

	AMateria	*clone(void) const;

	Cure	&operator=(Cure const &src);
};

#endif
