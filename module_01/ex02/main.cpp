/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:24:55 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/03 10:36:27 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(){

    std::string     var("HI THIS IS BRAIN");
    std::string*    stringPTR = &var;
    std::string&    stringREF = var;

    std::cout << "The memory address of the string     : " << &var << std::endl       ;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl  ;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl ; 
    std::cout << "The value of the string variable     : " << var << std::endl        ;
    std::cout << "The value pointed to by stringPTR    : " << *stringPTR << std::endl ;
    std::cout << "The value pointed to by stringREF    : " << stringREF << std::endl  ;
}