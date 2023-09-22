/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:18:51 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/02 15:21:36 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*     newZombie(std::string   name){
    Zombie  *new_zombie;

    new_zombie = new Zombie(name) ;
    return (new_zombie);
}