/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:02:25 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 11:50:34 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>


void print(int i){
    std::cout << CYN << i << RESET<< std::endl;
}

int main(){
    
    std::vector<int> vector;
    std::list<int>  list;
    
    int     toFind = 14;
    
    for (int i = 0; i < 20; i++){
        vector.push_back(i);
    }

    try{
        std::vector<int>::iterator   itVector = easyfind(vector, toFind);
        std::cout << YEL "------------------- # Test 1 : Vector # -------------------\n" RESET << std::endl;
        std::cout << GRN "=>  Vector starting at "<< toFind << " :\n" RESET << std::endl;
        std::for_each(itVector, vector.end(), print);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    for (int i = 0 ; i < 25 ; i++){
        list.push_back(i);
    }

    try
    {
        std::list<int>::iterator   itList = easyfind(list, toFind);
        std::cout << YEL "\n------------------- # Test 1 : List # -------------------" RESET << std::endl;
        std::cout << GRN "\n =>  List starting at "<< toFind << " :\n" RESET<< std::endl;
        std::for_each(itList, list.end(), print);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}