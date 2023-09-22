/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:36:36 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:02:02 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    const   std::string     animalIdeas[] = {
        "I'm Hungry" ,
        "I want to sleep",
        "I want to drink",
        "I want to play",
        "I want to walk outside"
    };
    for (int i = 0; i < 100; i++)
        this->ideas[i] = animalIdeas[(rand() % 5)];
         std::cout << CYN "🧠 Brain() has been constructed successfully ! 🧠" RESET<< std::endl; 
}

Brain::Brain(const Brain& obj){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
        std::cout << BLU "🧠 Brain object has been copied successfully ! 🧠" RESET << std::endl;
}

Brain::~Brain(){
    std::cout << RED "🧠 ~Brain() has been destructed successfully ! 🧠" RESET << std::endl;
}

const   std::string&   Brain::getIdea(int index)    const{
    return this->ideas[index];
}


Brain&  Brain::operator = (const Brain& obj){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return (*this);
}