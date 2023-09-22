/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:53:18 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/08 14:56:15 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "utils.hpp"
#include<limits>

int main(){
    Zombie  *zombie;
    int     numberOfZombie;
    
    std::cout << GRN "Please Enter The Number of Zombie You Wanna Create : " RESET<< std::endl;
    std::cin >> numberOfZombie;
    while(1)
    {
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << RED "Ops! : You have entered wrong input please enter a number :" RESET<< std::endl;
            std::cin >> numberOfZombie;
        }
        if(!std::cin.fail())
        break;
    }
    zombie = zombieHorde(numberOfZombie, YEL "Dead Walker num  " RESET);
    for(int i = 0; i < numberOfZombie; i++){
        zombie[i].announce() ;
    }
    delete [] zombie;
}