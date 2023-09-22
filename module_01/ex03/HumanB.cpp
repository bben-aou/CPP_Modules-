/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:08:28 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/03 11:52:32 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string  name){
    this->name = name;
}

HumanB::~HumanB(void){
    std::cout << "HumanB destructor has been called !" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}

void   HumanB::attack(void) const{
    std::cout << this->name << " attacks with his " ;
    if (this->weapon)
        std::cout << this->weapon->getType() << std::endl;
    else
        std::cout << "empty hands" << std::endl;
}