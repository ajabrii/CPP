/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:02:42 by kali              #+#    #+#             */
/*   Updated: 2025/01/11 18:02:43 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        ~Cure();
        Cure(const Cure& other);
        Cure&    operator=(const Cure& other);

        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif