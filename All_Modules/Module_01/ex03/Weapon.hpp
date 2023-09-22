/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:46:45 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/03 11:35:33 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon{
        private : 
            std::string    type;
        public  :
            Weapon(std::string  type)                      ;
            ~Weapon(void)                                  ;
            void                 setType(std::string type) ;
            std::string const &  getType(void)    const    ;
};


#endif