/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:21:35 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 08:49:14 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    this->hitPoint     = 100 ;
    this->energyPoint  = 100 ;
    this->attackDamage = 30  ; 
    
    std::cout << CYN "Default FragTrap() constructor has been called !" RESET << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name){
    this->hitPoint     = 100 ;
    this->energyPoint  = 100 ;
    this->attackDamage = 30  ; 

    std::cout << CYN "Constructor FragTrag(\"" << this->Name << "\") has been called !" RESET << std::endl;
}
FragTrap::~FragTrap(){
    
    std::cout << RED "Destructor " RESET "~FragTrap() " RED " has been called !" RESET << std::endl;
    
}

void    FragTrap::attack(std::string const &target){
    std::cout << GRN "FragTrap  " RESET << this->Name  ;
    if (this->energyPoint > 0)
    {
        this->energyPoint -= 1;
        std::cout << YEL " attacked " RESET << target << YEL ", causing " RESET << this->attackDamage << YEL " Points of damage !" RESET << std::endl;
    }
    if (this->hitPoint == 0)
        std::cout << " has no more hit point to attack please repair !" << std::endl;
    else
        std::cout << RED " has no enough energy points to attack !" RESET << target << std::endl;
}

void    FragTrap::highFivesGuys(){
    std::cout << GRN "FragTrap " RESET << this->Name << MAG " would like to high five everyone !" RESET << std::endl;
}

FragTrap& FragTrap::operator = (FragTrap const &obj){
    ClapTrap::operator = (obj);
    return(*this);
}

