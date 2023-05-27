/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:16:22 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:54:41 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private :

	Brain	*_brain;

public :

	Cat(void);
	Cat(std::string const &type);
	Cat(Cat const &src);

	virtual ~Cat(void);

	virtual void	makeSound(void) const;

	Cat		&operator=(Cat const &src);
};

#endif
