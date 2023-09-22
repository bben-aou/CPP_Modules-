/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:33:23 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:55:33 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

	system("echo \n\n");
	const Animal* meta = new Animal();
	const Animal* i = new Cat("Whiskers");
	const Animal* j = new Dog("Akamaru");
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat("Felix");

	std::cout << std::endl;
	std::cout << "The type of " << YEL  "i " RESET << "is : " BLU <<  i->getType() << " " RESET << std::endl;
	std::cout << "The type of " << YEL "j " RESET << "is : " BLU << j->getType()  << " " RESET << std::endl;
	std::cout << "The type of " << YEL "k " RESET << "is : " BLU << k->getType()  << " " RESET << std::endl;
	std::cout << "The type of " << YEL "l " RESET << "is : " BLU << l->getType()  << " " RESET<< std::endl << std::endl;
	std::cout << "i says :" ;
	i->makeSound();
	std::cout << std::endl;
	std::cout << YEL "j " RESET << "says : " ;
	j->makeSound();
	std::cout << std::endl;
	std::cout << MAG "meta " RESET<< "says : " ;
	meta->makeSound();
	std::cout << std::endl;
	std::cout <<  "\n------- Wrong Animal : ----- \n" << std::endl;
	std::cout << MAG "k " RESET<< "says : " ;
	k->makeSound();
	std::cout <<  "\n------------------------------ \n" << std::endl;
	std::cout << std::endl;
	std::cout << MAG "l " RESET << "says : " ;
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	
	// system("echo \n\n");
	// system("leaks Animal");
}