/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:51:29 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 08:44:59 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main(){

    int a = 2;
    int b = 3;
    
    std::cout << YEL "+++++++++ # Test  : swap() - min() - max()# +++++++++\n" RESET << std::endl;
    std::cout << GRN "Case 1 ~ numbers ~ : \n" RESET<< std::endl;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::cout << GRN "\nCase 2 ~ Strings ~ : \n" RESET << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << GRN "\nCase 3 ~ Floats ~ : \n" RESET << std::endl;

    float floatA = 3.8;
	float floatB = 2.7;

	::swap<float>(floatA, floatB);
	std::cout << "floatA: " << floatA << " | floatB : " << floatB << std::endl;
	
	std::cout << MAG "\n--> Explicit:\n" RESET << std::endl;
	std::cout << "- min<float>(floatA, floatB): " << ::min<float>(floatA, floatB) << std::endl;
	std::cout << "- max<float>(floatA, floatB): " << ::max<float>(floatA, floatB) << std::endl;

	std::cout << MAG "\n--> Implicit:\n" RESET << std::endl;
	std::cout << "- min(floatA, floatB): " << ::min(floatA, floatB) << std::endl;
	std::cout << "- max(floatA, floatB): " << ::max(floatA, floatB) << std::endl;


    std::cout << GRN "\nCase 4 ~ Doubles ~ : \n" RESET << std::endl;

    double doubleA = 1000.123;
	double doubleB = -130.0;

    std::cout << "doubleA: " << doubleA << " | doubleB : " << doubleB << std::endl;
    
    std::cout << MAG "\n--> Explicit:\n" RESET << std::endl;
	std::cout << "- min<double>(doubleA, doubleB): " << ::min<double>(doubleA, doubleB) << std::endl;
	std::cout << "- max<double>(doubleA, doubleB): " << ::max<double>(doubleA, doubleB) << std::endl;

    std::cout << MAG "\n--> Implicit:\n" RESET << std::endl;
	std::cout << "- min(doubleA, doubleB): " << ::min(doubleA, doubleB) << std::endl;
	std::cout << "- max(doubleA, doubleB): " << ::max(doubleA, doubleB) << std::endl;

    return (0);    
}