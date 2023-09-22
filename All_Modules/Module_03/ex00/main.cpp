/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:47 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/19 11:45:14 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap player1("player1");
	ClapTrap player2("player2");
	ClapTrap player3("player3");

	player1.attack("enemy 1");
	player1.attack("enemy 2");
	player1.attack("enemy 3");
	player1.takeDamage(5);
	player2.takeDamage(9);
	player2.takeDamage(10);
	player3.beRepaired(10);
	player3.takeDamage(19);
}