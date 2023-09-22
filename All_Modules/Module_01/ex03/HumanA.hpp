/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:58:14 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/03 12:00:39 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanA{
        private :
            std::string     name   ;
            Weapon&         weapon ;
        public  :
            HumanA(std::string name, Weapon& weapon) ;
            ~HumanA(void)                            ;
            void        attack(void)    const        ;
};
