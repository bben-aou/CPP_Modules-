/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:22:34 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 12:30:59 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char *argv[]){
    if (argc != 2){
        std::cout << CYN "Invalid Argument  !" << std::endl << "Usage: ./convert number" RESET << std::endl;
        return (1);
    }

    Scalar convert;
    
    try{
        convert.setStr(argv[1]);
        convert.convert();
        std::cout << convert;
    }
    catch(std::exception& e){
        std::cerr << RED "Ops: " RESET << e.what() << std::endl;
    }
    return (0);   
}