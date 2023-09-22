/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:00:37 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/08 14:43:53 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "utils.hpp"

int main(){
    Zombie  *zombie;
    
    zombie = newZombie("Bilal");
    zombie->announce();
    delete  zombie;
    randomChump("unknown");
}