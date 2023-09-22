/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:23:08 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 14:45:04 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base* generate()
{
	std::cout << GRN "Generated Class : " RESET;
	switch (rand() % 3)
	{
	case 0:
		std::cout << MAG "A" RESET;
		return new A();
	case 1:
		std::cout << MAG "B" RESET;
		return new B();
	case 2:
		std::cout << MAG "C" RESET;
		return new C();
	default:
		return NULL;
	}
}

void identify(Base* p)
{
	std::cout << YEL "Identify by pointer : " RESET;
	if (dynamic_cast<A*>(p))
		std::cout << MAG "A" RESET << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << MAG "B" RESET << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << MAG "C" RESET << std::endl;
	else
		std::cerr << RED "bad cast" RESET<< std::endl;

}

void identify(Base& p)
{
	try
	{
		std::cout << YEL "Identify by reference : " RESET;
		if (dynamic_cast<A*>(&p))
			std::cout << MAG "A" RESET << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << MAG "B" RESET << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << MAG "C" RESET << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	srand(time(NULL));
	Base* ptr = generate();
	std::cout << RED " (pointer)" RESET<< std::endl;
	Base* tmp = generate();
	Base& ref = *tmp;
	std::cout << RED " (reference)" RESET<< std::endl;

	identify(ptr);
	identify(ref);

	delete ptr;
	delete tmp;
}
