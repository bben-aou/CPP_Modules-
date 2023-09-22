/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:28:02 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:06:50 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    try{
        this->brain = new Brain();
        std::cout << MAG "✅ Memory is allocated successfully !" RESET << std::endl;
    }
    catch (const std::bad_alloc& e){
         std::cout << RED "❌ Memory Allocation is failed : " RESET << e.what() << std::endl;
    }
    
    std::cout << CYN "🐶 Dog() has been constructed successfully ! 🐶" RESET<< std::endl;
}

Dog::Dog(std::string  type) : Animal(type){
    try{
        this->brain = new Brain();
        std::cout << MAG "✅ Memory is allocated successfully !" RESET << std::endl;
    }
    catch (const std::bad_alloc& e){
        std::cout << RESET "❌ Memory Allocation is failed : " RESET << e.what() << std::endl;
    }
    std::cout << CYN "🐶 Dog(\"" << type << "\") has been constructed successfully ! 🐶" RESET << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj){
    this->brain = new Brain(*obj.brain) ;
    std::cout << BLU "🐶 Dog object has been copied successfully ! 🐶" RESET << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << RED "🐶 Dog() has been destructed successfully ! 🐶" RESET<< std::endl;
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