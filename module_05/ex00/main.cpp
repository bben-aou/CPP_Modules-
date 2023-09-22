/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:46:49 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:12:37 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
        Bureaucrat  user1("user1", 2);
        Bureaucrat  user2("user2", 100);
    try{
        std::cout << BLU "\n============ Bureaucrat's Informations : ============\n" RESET << std::endl;
        
        std::cout << user1 << std::endl;
        std::cout << user2 << std::endl;
        
        std::cout << BLU "\n============ Test # 1 # : ============\n" RESET<< std::endl;
        
        user1.incrementGrade();
        user2.decrementGrade();
        
        std::cout << user1 << std::endl;
        std::cout << user2 << std::endl;
        
        std::cout << BLU "\n============ Test # 2 # : ============\n" RESET<< std::endl;
        
        user1.incrementGrade();
        user2.decrementGrade();
        
        std::cout << user1 << std::endl;
        std::cout << user2 << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}