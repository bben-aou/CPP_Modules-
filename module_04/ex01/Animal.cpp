/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:31:26 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:49:35 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << CYN "Animal() has been constructed successfully !" RESET<< std::endl;
}

Animal::Animal(std::string type){
    this->type = type ;
    std::cout << CYN "Animal(\"" << type << "\") has been constructed successfully !" RESET<< std::endl;
}

Animal::~Animal(){
    std::cout << RED "Animal() has been destructed successfully !" RESET<< std::endl;
}

Animal::Animal(const Animal& obj){
    this->type = obj.type ;
    std::cout << BLU  "Animal object copying has been done successfully !" RESET << std::endl;
}

std::string    Animal::getType()    const{
    return (this->type);
}

void           Animal::makeSound()  const{
    std::cout << "🔉 Default Animal sound !! 🔉" << std::endl;
}

Animal&        Animal::operator = (const Animal& obj){
    this->type = obj.type;
    return (*this);
}