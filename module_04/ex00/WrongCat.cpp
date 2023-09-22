/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:36:08 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:48:18 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat"){
    std::cout << CYN  "🐱 Default WrongCat() Constructor has been called ! 🐱" RESET << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){
    this->type = type;
    std::cout << CYN "🐱 Default WrongCat(\"" << type << "\") has been called ! 🐱" RESET<< std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj){
    this->type = obj.type;
    std::cout << BLU "🐱 WrongCat() copy constructor has been called ! 🐱" RESET<< std::endl;
}
WrongCat::~WrongCat(){
    std::cout << RED "🐱 Default ~WrongCat() Destructor has been called ! 🐱" RESET<< std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << RED "🔉 Meow 🐱" RESET << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& obj){
    this->type = obj.type;
    return (*this);
}



