/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:28:42 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/02 17:19:06 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# include <iostream>

class Zombie{
        private :
            std::string     name;
        public  :
                Zombie(void)                     ;
                Zombie(std::string  name)        ;
                ~Zombie()                        ;
                void    announce(void)           ;
                void    setName(std::string const name);
};


#endif