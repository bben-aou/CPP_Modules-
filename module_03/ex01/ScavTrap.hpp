/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:44:52 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/19 10:06:17 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
            public :
                ScavTrap( void );
                ScavTrap(std::string Name);
                ScavTrap(const ScavTrap& obj);
                ~ScavTrap( void );

                ScavTrap& operator = (const ScavTrap& obj);
                
                void    attack(std::string const &target);
                void    guardGate(); 
};
