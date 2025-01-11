/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:03:44 by kali              #+#    #+#             */
/*   Updated: 2025/01/11 18:03:45 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        ~Ice();
        Ice(const Ice& other);
        Ice&    operator=(const Ice& other);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif