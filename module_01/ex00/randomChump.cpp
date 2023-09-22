/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    randomChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:41:06 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/02 15:42:26 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie  zombie(name) ;
    
    zombie.announce();
    
}