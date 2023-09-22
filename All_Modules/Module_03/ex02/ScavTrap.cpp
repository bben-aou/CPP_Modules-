/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:49:51 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 08:08:45 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    this->energyPoint = 50  ;
    this->hitPoint    = 100 ;
    this->attackDamage = 20 ;

    std::cout << CYN "Default ScavTrap() Constructor has been called !" RESET << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name){
    this->energyPoint = 50  ;
    this->hitPoint    = 100 ;
    this->attackDamage = 20 ;

    std::cout << CYN "Constructor ScavTrap(\"" << Name << "\") has been called !" RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj){
    
    std::cout << CYN  "ScavTrap Copy constructor has been called on " RESET  << obj.Name << std::endl;
    
    
}

ScavTrap::~ScavTrap(){
    std::cout << RED "ScavTrap Destructor has been called on " RESET << this->Name << std::endl;
}

void    ScavTrap::attack(std::string const &target){
    std::cout << GRN "ScavTrap " RESET << this->Name ;
    if (this->energyPoint > 0){
        this->energyPoint -= 1;
        std::cout << YEL " attacked " RESET << target << YEL ", causing " RESET << this->attackDamage << YEL " points of damage !" RESET << std::endl;
    }
    if (this->hitPoint == 0)
        std::cout << " has no more hit point to attack !" << std::endl;
    else
        std::cout << RED " has no enough energy points to attack !" RESET << std::endl;
}

void    ScavTrap::guardGate(){
    std::cout << GRN "ScavTrap " RESET << this->Name << YEL " is now a Gate keeper !" RESET << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& obj){
    
    ClapTrap::operator=(obj);
    return (*this);
}