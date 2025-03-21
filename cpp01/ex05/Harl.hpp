/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:20:40 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/28 16:24:47 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
#define HARL_HPP

# include <iostream>
# define DEFAULT "[DEFAULT] :: Default case\n"
# define DEBUG "[DEBUG] :: Debug\n"
# define INFO "[INFO] :: Info\n"
# define WARRNING "[WARNING] :: Warning\n"
# define ERROR "[ERROR] :: This is unacceptable! I want to speak to the manager now.\n"


class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        
        struct Level {
            std::string lvl;
            void (Harl::*ft)(void);
        };
        static const Level lvs[4];
    public:
        void complain( std::string level );
    
};

#endif