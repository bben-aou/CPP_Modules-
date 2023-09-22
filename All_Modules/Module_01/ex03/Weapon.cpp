/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:52:10 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/03 11:48:04 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string  type){
    this->type = type;
}

Weapon::~Weapon(void){
    std::cout << "Weapon destructor has been called !" << std::endl;
}

std::string const &  Weapon::getType(void) const{
    return (this->type);
}

void                Weapon::setType(std::string type){
    this->type = type;
}
