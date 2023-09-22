/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:55:05 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:05:24 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    try{
        this->brain = new Brain();
        std::cout << MAG "✅ Memory is allocated successfully !" RESET<< std::endl;
    }
    catch (const std::bad_alloc& e){
         std::cout << RED "❌ Memory Allocation is failed : " RESET<< e.what() << std::endl;
    }
    
    std::cout << CYN "😸 Cat() has been constructed successfully ! 😸" RESET<< std::endl;
}

Cat::Cat(std::string  type) : Animal(type){
    try{
        this->brain = new Brain();
        std::cout << MAG "✅ Memory is allocated successfully !" RESET << std::endl;
    }
    catch (const std::bad_alloc& e){
        std::cout << RED "❌ Memory Allocation is failed : " RESET << e.what() << std::endl;
    }
    std::cout << CYN "😸 Cat(\"" << type << "\") has been constructed successfully ! 😸" RESET<< std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj){
    this->brain = new Brain(*obj.brain) ;
    std::cout << BLU  "😸 Cat object has been copied successfully ! 😸" RESET << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << RED "😸 Cat() has been destructed successfully ! 😸" RESET << std::endl;
}

void    Cat::makeSound()    const{
    std::cout <<  GRN "🔉 Meow 😸" RESET << std::endl;
}

Brain*  Cat::getBrain()     const{
    return (this->brain);
}

Cat&    Cat::operator = (const Cat &obj){
    this->type  = obj.type ;
    try{
        this->brain = new Brain(*obj.brain);
        std::cout << "✅ Memory is allocated successfully !" << std::endl;
    }
    catch (const std::bad_alloc& e){
        std::cout << "❌ Memory Allocation is failed : " << e.what() << std::endl;
    }
    return (*this);
}