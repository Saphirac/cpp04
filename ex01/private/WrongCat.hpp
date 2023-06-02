/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:49:50 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:58:12 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
public :
	
	WrongCat(std::string const &type);
	WrongCat(WrongCat const &src);
	WrongCat(void);
	virtual	~WrongCat(void);

	void		makeSound(void) const;

	WrongCat	&operator=(WrongCat const &src);
};

#endif
