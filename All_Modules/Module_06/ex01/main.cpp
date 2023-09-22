/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:05:29 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 13:20:49 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <bitset>

int main(){
    
    Data data;

    data.firstName = "uknown";
    data.lastName  = "uknown";
    data.userName  = "userUknown";
    data.age       = 20;
    data.level     = 3.55;

    std::cout << GRN "===== Data informations before any serialize : ======" RESET << std::endl;

    std::cout << "first name : " << data.firstName << std::endl;
	std::cout << "last name  : " << data.lastName << std::endl;
	std::cout << "nickname   : " << data.userName << std::endl;
	std::cout << "age        : " << data.age << std::endl;
	std::cout << "level      : " << data.level << std::endl;

	std::cout << YEL "-----------------------------------------------------" RESET << std::endl;

    uintptr_t new_uintptr = serialize(&data);

    Data* newData =  deserialize(new_uintptr);
    
     std::cout << GRN "===== Data informations after serialize and deserialize  : ======" RESET << std::endl;

    std::cout << "first name : " << newData->firstName << std::endl;
	std::cout << "last name  : " << newData->lastName << std::endl;
	std::cout << "nickname   : " << newData->userName << std::endl;
	std::cout << "age        : " << newData->age << std::endl;
	std::cout << "level      : " << newData->level << std::endl;

	std::cout << YEL "-----------------------------------------------------" RESET << std::endl;

    
}