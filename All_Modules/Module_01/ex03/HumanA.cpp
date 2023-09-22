/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:02:16 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/03 12:04:44 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon){
    this->name = name;
}

HumanA::~HumanA(void){
    std::cout << "HumanA destructor has been called !" << std::endl;
}

void    HumanA::attack(void)  const{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
