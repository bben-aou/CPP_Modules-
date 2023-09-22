/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:57:07 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:48:10 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "! Uknown !";
    std::cout << CYN "Default WrongAnimal() has been called !" RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
    this->type = type;
    std::cout << CYN "Default WrongAnimal(\"" << type << "\") has been called !" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj){
    this->type = obj.type;
    std::cout << BLU "WrongAnimal() Copy Construction has been called !" RESET << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << RED "Default ~WrongAnimal() Destructor has been called !" RESET << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->type);
}

void    WrongAnimal::makeSound()    const{
    std::cout << RED " 🔉 Default WrongAnimal Sound !! 🔉" RESET<< std::endl;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& obj){
    this->type = obj.type;
    return (*this);
} 