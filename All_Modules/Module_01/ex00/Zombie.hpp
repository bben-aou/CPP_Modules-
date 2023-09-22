/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:00:33 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/08 14:33:35 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
        private :
                std::string   name;
        public  :
                Zombie(std::string const  name) ;
                Zombie()                        ;
                ~Zombie()                       ;
                void    announce(void)          ;
};

#endif