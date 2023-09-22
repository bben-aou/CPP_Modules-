/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 08:59:47 by bben-aou          #+#    #+#             */
/*   Updated: 2022/12/24 09:47:36 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "Animal";
    std::cout << CYN  "Default Animal() Constructor has been called !" RESET << std::endl;
}

Animal::Animal(std::string type){
    this->type = type;
    std::cout << CYN "Default Animal(\"" << type << "\") has been called !" RESET << std::endl; 
}

Animal::Animal(const Animal& obj){
    this->type = obj.type ;
    std::cout << BLU "Animal Copy Constructor has been called !" RESET << std::endl;  
}

Animal::~Animal(){
    std::cout << RED "Default ~Animal() Destructor has been called !" RESET<< std::endl;
}

void    Animal::makeSound() const{
    std::cout << "🔉 Default Animal sound ! 🔉" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}

Animal& Animal::operator = (const Animal& obj){
    this->type = obj.type;
    return (*this);
}