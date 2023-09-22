/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:00:20 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 11:45:57 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	system("echo \n\n");
	{
		AAnimal* animals[10];
		
		for (int i = 0; i < 10; i++)
		{
			if (i >= 5)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		Cat copy(*(Cat *)animals[0]);
		std::cout << std::endl;
		for (int i = 0; i < 100; i++)
		{
			std::cout << YEL "📍 From the copy object : " RESET ;
			std::cout  << copy.getBrain()->getIdea(i) << std::endl;
			std::cout << std::endl;
			std::cout << YEL "📍 From the original object : " RESET;
			std::cout  << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
			std::cout << std::endl;
			std::cout << MAG "++++++++++++++++++++++++++++++++++++++++\n" RESET<< std::endl  ;
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			delete animals[i];
		}
	}
	
	// system("echo \n\n");
	// system("leaks Animal");
}