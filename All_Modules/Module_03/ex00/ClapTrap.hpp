/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 10:00:53 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/19 10:13:58 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_HPP
#define  CLAPTRAP_HPP

# include <iostream>
# include <string>

# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define RESET "\033[0m"



class ClapTrap{
        private :
            std::string     Name         ;
            unsigned int    hitPoint     ;
            unsigned int    energyPoint  ;
            unsigned int    attackDamage ;
            
        public :
            ClapTrap( void )              ; 
            ClapTrap(std::string    Name) ;
            ClapTrap(const ClapTrap& obj) ;
            ~ClapTrap( void )             ;
            
            void    attack(std::string const & target) ;
            void    takeDamage(unsigned int amount)    ;
            void    beRepaired(unsigned int amount)    ;

            ClapTrap& operator = (const ClapTrap& obj);
};

#endif