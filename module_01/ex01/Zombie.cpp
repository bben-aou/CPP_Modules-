/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:35:36 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/08 14:56:25 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "utils.hpp"

Zombie::Zombie(std::string  name){
    this->name = name;
}

Zombie::Zombie(){

}


void    Zombie::announce(void){
    std::cout << BLU << this->name << RESET << MAG " :  BraiiiiiiinnnzzzZ..." RESET << std::endl;
}

void    Zombie::setName(std::string const name){
    this->name = name;
}

Zombie::~Zombie(){
    std::cout << BLU << this->name <<  RESET<< YEL " 🧟 : has been killed ! 💀" RESET <<std::endl;
}