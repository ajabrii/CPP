/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:04:51 by kali              #+#    #+#             */
/*   Updated: 2025/01/11 18:04:56 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materia[4];

    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const& other);
        MateriaSource&  operator=(MateriaSource const& other);

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif