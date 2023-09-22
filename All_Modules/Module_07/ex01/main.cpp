/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:29:09 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 08:48:51 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main(){
    std::string words[]={
            "leader",
            "movement",
            "hypothesize",
            "damage",
    };

    int     numbers[] = {
            10,
            20,
            30,
            40,
    };

    std::cout << YEL "-------- # Test 1 : # --------\n" RESET<< std::endl;
    std::cout << GRN "~ Print the elements of a string array ~\n" RESET << std::endl; 
    ::iter(words, 4, print<std::string>);
    
    std::cout << YEL "-------- # Test 2 : # --------\n" RESET<< std::endl;
    std::cout << GRN "~ Print the elements of a string array with index  ~\n" RESET << std::endl; 

    ::iter(words,4, printWithIndex<std::string>);
    
    std::cout << YEL "-------- # Test 3: # --------\n" RESET << std::endl;
    std::cout << GRN "~ Print the elements of an int array  : ~\n" RESET << std::endl; 
    ::iter(numbers, 4, print<int>);

    std::cout << YEL "-------- # Test 4: # --------\n" RESET << std::endl;
    std::cout << GRN "~ Print the elements of an int array with index  ~\n" RESET << std::endl; 

    ::iter(numbers,4, printWithIndex<int>);
    
}