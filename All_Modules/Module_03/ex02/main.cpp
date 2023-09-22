/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:09:09 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/19 12:30:15 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap player1("player1");
	ClapTrap player2("player2");
	ClapTrap player3("player3");
	ScavTrap player4("player4");
	FragTrap player5("player5");

	player1.attack("enemy 1");
	player1.attack("enemy 2");
	player1.attack("enemy 3");
	player1.takeDamage(5);
	player2.takeDamage(9);
	player2.takeDamage(10);
	player3.beRepaired(10);
	player3.takeDamage(19);
	player4.attack("enemy 4");
	player4.takeDamage(99);
	player4.beRepaired(50);
	player4.guardGate();
	player5.attack("enemy 5");
	player5.takeDamage(99);
	player5.beRepaired(50);
	player5.highFivesGuys();
}