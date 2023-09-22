/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:14:40 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/03 11:51:19 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Weapon.hpp"

class HumanB{
        private :
            std::string  name   ;
            Weapon*      weapon ;
        public  :
            HumanB(std::string  name) ;
            ~HumanB(void)             ;
            void    setWeapon(Weapon& weapon) ;
            void    attack(void)   const      ;
};
