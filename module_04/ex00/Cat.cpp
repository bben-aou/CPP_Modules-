/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:29:21 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:48:02 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << CYN "😸 Default Cat() Constructor has been called !😸" RESET << std::endl;
}

Cat::Cat(std::string type) : Animal(type){
    std::cout << CYN "😸 Default Cat(\"" << type << "\") has been called ! 😸" RESET << std::endl;
}

Cat::Cat(const Cat& obj){
    this->type = obj.type;
    std::cout << BLU "😸 Cat() Copy Constructor has been called ! 😸" RESET << std::endl;
}

Cat::~Cat(){
    std::cout << RED "😸 Default ~Cat() Destructor has been called ! 😸" RESET<< std::endl;
}

void   Cat::makeSound() const{
    std::cout << GRN "🔉 Meow 😸" RESET << std::endl;
}

Cat& Cat::operator = (const Cat& obj){
   this->type = obj.type;
   return (*this); 
}

