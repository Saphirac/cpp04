/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:02:17 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/30 17:35:40 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(std::string const &type);
	Ice(Ice const &src);

	virtual	~Ice(void);

	void	use(ICharacter &target);

	AMateria	*clone(void) const;

	Ice	&operator=(Ice const &src);
};

#endif
