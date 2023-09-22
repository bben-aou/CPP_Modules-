/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:55:05 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:06:06 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
    try{
        this->brain = new Brain();
        std::cout << "✅ Memory is allocated successfully !" << std::endl;
    }
    catch (const std::bad_alloc& e){
         std::cout << "❌ Memory Allocation is failed : " << e.what() << std::endl;
    }
    
    std::cout << "😸 Cat() has been constructed successfully ! 😸" << std::endl;
}

Cat::Cat(std::string  type) : AAnimal(type){
    try{
        this->brain = new Brain();
        std::cout << "✅ Memory is allocated successfully !" << std::endl;
    }
    catch (const std::bad_alloc& e){
        std::cout << "❌ Memory Allocation is failed : " << e.what() << std::endl;
    }
    std::cout << "😸 Cat(\"" << type << "\") has been constructed successfully ! 😸" << std::endl;
}

Cat::Cat(const Cat& obj) : AAnimal(obj){
    this->brain = new Brain(*obj.brain) ;
    std::cout << "😸 Cat object has been copied successfully ! 😸" << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "😸 Cat() has been destructed successfully ! 😸" << std::endl;
}

void    Cat::makeSound()    const{
    std::cout << GRN "🔉 Meow 😸" RESET << std::endl;
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