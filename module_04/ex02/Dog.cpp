/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:28:02 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:08:19 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"){
    try{
        this->brain = new Brain();
        std::cout << "✅ Memory is allocated successfully !" << std::endl;
    }
    catch (const std::bad_alloc& e){
         std::cout << "❌ Memory Allocation is failed : " << e.what() << std::endl;
    }
    
    std::cout << "🐶 Dog() has been constructed successfully ! 🐶" << std::endl;
}

Dog::Dog(std::string  type) : AAnimal(type){
    try{
        this->brain = new Brain();
        std::cout << "✅ Memory is allocated successfully !" << std::endl;
    }
    catch (const std::bad_alloc& e){
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
    std::cout << "🐶 Dog(\"" << type << "\") has been constructed successfully ! 🐶" << std::endl;
}

Dog::Dog(const Dog& obj) : AAnimal(obj){
    this->brain = new Brain(*obj.brain) ;
    std::cout << "🐶 Dog object has been copied successfully ! 🐶" << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "🐶 Dog() has been destructed successfully ! 🐶" << std::endl;
}

void    Dog::makeSound()    const{
    std::cout << GRN "🔉 Woof 🐶" RESET << std::endl;
}

Brain*  Dog::getBrain()     const{
    return (this->brain);
}

Dog&    Dog::operator = (const Dog &obj){
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