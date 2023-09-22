/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:04:05 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:38:18 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << CYN "🐶 Default Dog() Constructor has been called ! 🐶" RESET<< std::endl;
}

Dog::Dog(std::string type) : Animal(type){
    std::cout << CYN "🐶 Default Dog(\"" << type << "\") Constructor has been called ! 🐶" RESET << std::endl; 
}

Dog::Dog(const Dog& obj) : Animal(obj){
    this->type = obj.type;
    std::cout << BLU "🐶 Copy Dog() Constructor has been called ! 🐶" RESET<< std::endl;
}

Dog::~Dog(){
    std::cout << RED "🐶 Default ~Dog() Destructor has been called ! 🐶" RESET << std::endl;
}

void    Dog::makeSound() const{
    std::cout << GRN "🔉 Woof 🐶" RESET << std::endl;
}

Dog&    Dog::operator = (const Dog& obj){
    this->type = obj.type;
    return (*this);
}