/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 08:50:20 by bben-aou          #+#    #+#             */
/*   Updated: 2022/12/24 08:50:42 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->Name         = "unkown";
    this->hitPoint     = 10      ;
    this->energyPoint  = 10      ;
    this->attackDamage = 0      ;

    std::cout << CYN "Default Constructor has been called and data initialized !" RESET<< std::endl;
}

ClapTrap::ClapTrap(std::string Name){
    this->Name         = Name    ;
    this->hitPoint     = 10      ;
    this->energyPoint  = 10      ;
    this->attackDamage = 0      ;

    std::cout << CYN "Constructor ClapTrap(\"" << this->Name << "\") has been called !" RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj){
    this->Name         = obj.Name         ;
    this->hitPoint     = obj.hitPoint     ;
    this->energyPoint  = obj.hitPoint     ;
    this->attackDamage = obj.attackDamage ;
    
    std::cout << CYN "Copy Constructor has been called !" RESET<< std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << RED "Default Destructor has been called !" RESET << std::endl;
}

void ClapTrap::attack(std::string const &target){
    std::cout << GRN "ClapTrap " RESET << this->Name ;
    if (this->energyPoint > 0){
        this->energyPoint -= 1 ;
        std::cout <<YEL " attacked " << target << ", causing "  RESET << this->attackDamage << YEL " points of damage !" RESET << std::endl ;
    }
    if (this->hitPoint == 0)
        std::cout << RED " has no more hit points !" RESET << std::endl;
    else
        std::cout << RED " has no enough energy points to attack  " RESET << target <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << GRN "ClapTrap " RESET << this->Name ;
    if (this->hitPoint == 0)
        std::cout << RED  " is already dead !" RESET << std::endl;
    else if (amount > this->hitPoint){
        std::cout << YEL " takes " RESET << this->hitPoint << YEL  " damage and dies !" RESET << std::endl;
        this->hitPoint = 0;
    }
    else{
            this->hitPoint -= amount ;
            std::cout << YEL " takes " RESET << amount << YEL " damage, "  RESET << this->hitPoint  << YEL " hit points remaining !" RESET << std::endl;  
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energyPoint > 0)
        this->energyPoint -= 1 ;
    this->hitPoint += amount;
    std::cout << GRN "ClapTrap " RESET << amount << YEL " Hit points has been added to " RESET << this->Name << YEL ", his Total hit points now is : " RESET << this->hitPoint << std::endl;  
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj){
    this->Name         = obj.Name ;
    this->hitPoint     = obj.hitPoint ;
    this->attackDamage = obj.attackDamage ;
    this->energyPoint  = obj.energyPoint ;
    return (*this);
}