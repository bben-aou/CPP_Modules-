/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:31:26 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:00:57 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << CYN "AAnimal() has been constructed successfully !" CYN << std::endl;
}

AAnimal::AAnimal(std::string type){
    this->type = type ;
    std::cout << CYN "AAnimal(\"" << type << "\") has been constructed successfully !" CYN << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << RED "AAnimal() has been destructed successfully !" RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj){
    this->type = obj.type ;
    std::cout << BLU "AAnimal object copying has been done successfully !" RESET << std::endl;
}

std::string    AAnimal::getType()    const{
    return (this->type);
}

AAnimal&        AAnimal::operator = (const AAnimal& obj){
    this->type = obj.type;
    return (*this);
}