/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:01:45 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/02 17:40:09 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*  zombieHorde( int N, std::string name ){
    Zombie* zombies;

    zombies = new   Zombie[N];

    for (int i = 0; i < N; i++){
        zombies[i].setName(name + "\033[1;32m"+ std::to_string(i + 1) + "\033[1m");
    }
    return (zombies);
}