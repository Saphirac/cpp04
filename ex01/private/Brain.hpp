/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:24:26 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/06/02 05:57:50 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

# include <string>

class Brain
{
private :
	
	std::string	_ideas[100];

public :

	Brain(void);
	Brain(Brain const &src);
	virtual	~Brain(void);

	Brain				&operator=(Brain const &src);

	std::string	const	&get_ideas(int const i) const;
};

#endif
