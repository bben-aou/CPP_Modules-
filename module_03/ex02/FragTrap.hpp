/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:18:07 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/19 10:06:35 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
        public  :
            FragTrap( void );
            FragTrap(std::string Name) ;
            FragTrap(const FragTrap& obj);
            ~FragTrap( void );

            FragTrap& operator = (FragTrap const &obj);

            void    attack(std::string const &target);
            void    highFivesGuys();
};