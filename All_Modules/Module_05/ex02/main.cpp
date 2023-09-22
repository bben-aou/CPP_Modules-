/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:29:59 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:50:18 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

    std::cout << BLU  "----------------- # Creation Bureaucrats #-----------------\n" RESET << std::endl;
	
		Bureaucrat bureaucrat1("bureaucrat1", 5);
		Bureaucrat bureaucrat2("bureaucrat2", 45);
		Bureaucrat bureaucrat3("bureaucrat3", 137);
	

    std::cout << YEL "\n----------------- # print Bureaucrat's Informations # -----------------\n" RESET << std::endl;

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;

 	std::cout << YEL "\n----------------- # Creation Derived class's objects #-----------------\n" RESET << std::endl;
	
		ShrubberyCreationForm	shrubbery("home");
		PresidentialPardonForm	pardon("Stephen Bannon");
		RobotomyRequestForm		robotomy("Bender");

 	std::cout << BLU "\n----------------- + Test  # 1 : Shrubbery # + -----------------\n" RESET<< std::endl;
	
 	std::cout << YEL "Execute shrubbery form (failure): \n" RESET << std::endl;
	
	// * the shrubbery form will not be executed because it's not signed yet *
	bureaucrat1.executeForm(shrubbery);
	bureaucrat2.executeForm(shrubbery);
	bureaucrat3.executeForm(shrubbery);
	// std::cout << std::endl;
 	std::cout << YEL "\n Sign shrubbery form : \n" RESET << std::endl;

	bureaucrat1.signForm(shrubbery);   // * it will be signed by the bureaucrat because he has the grade to sign it *
	bureaucrat2.signForm(shrubbery);   //  ! signing will fail because it's already signed *
	bureaucrat3.signForm(shrubbery); //   ! signing will fail for the same reason *
	// std::cout << std::endl;
 	std::cout << YEL "\n Execute shrubbery form (success) : \n" RESET<< std::endl;
	// * the shrubbery form will execute this time because it's signed *
	bureaucrat1.executeForm(shrubbery); // & the file target_shrubbery will be created 
	bureaucrat2.executeForm(shrubbery);
	bureaucrat3.executeForm(shrubbery);
	std::cout << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
 	std::cout << BLU "\n----------------- + Test  # 2 : Presidential Pardon # + -----------------\n" RESET << std::endl;

	// std::cout << std::endl;
	std::cout << YEL "Execute Presidential Pardon form (failure): \n" RESET << std::endl;
	// * the Presidential Pardon form will not be executed because it's not signed yet *
	bureaucrat1.executeForm(pardon);
	bureaucrat2.executeForm(pardon);
	bureaucrat3.executeForm(pardon);
	// std::cout << std::endl;
	
	std::cout << YEL "\n Sign Presidential Pardon form : \n" RESET  << std::endl;
	
	bureaucrat1.signForm(pardon);   // * it will be signed by the bureaucrat because he has the grade to sign it *
	bureaucrat2.signForm(pardon);   //  ! signing will fail because it's already signed *
	bureaucrat3.signForm(pardon); //   ! signing will fail for the same reason *
	std::cout << std::endl;
	std::cout << YEL "Execute Presidential Pardon form (success): \n" RESET << std::endl;
	// * the Presidential Pardon form will execute this time because it's signed  *
	bureaucrat1.executeForm(pardon); // & he will execute the action method of presidential pardon because he has the Grade required  
	bureaucrat2.executeForm(pardon); // ! he can not because he doesn't have the required grade to execute
	bureaucrat3.executeForm(pardon);// ! he can not because he doesn't have the required grade to execute
	std::cout << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
 	std::cout << BLU "\n----------------- + Test  # 3 :  Robotomy Request # + -----------------\n" RESET << std::endl;

	// std::cout << std::endl;
	std::cout << YEL "Execute Robotomy Request form (failure): \n" RESET << std::endl;
	
	// * the Robotomy Request form will not be executed because it's not signed yet *
	bureaucrat1.executeForm(robotomy);
	bureaucrat2.executeForm(robotomy);
	bureaucrat3.executeForm(robotomy);
	// std::cout << std::endl;
	std::cout << YEL "\n Sign Robotomy Request form : \n" RESET << std::endl;
	
	bureaucrat1.signForm(robotomy); // * it will be signed by the bureaucrat because he has the grade to sign it *
	bureaucrat2.signForm(robotomy); // ! he can not because he doesn't have the required grade to execute
	bureaucrat3.signForm(robotomy);// ! he can not because he doesn't have the required grade to execute
	std::cout << std::endl;
	// std::cout << std::endl;
	
	std::cout << YEL "Execute Robotomy Request form (success): \n" RESET << std::endl;
	
	bureaucrat1.executeForm(robotomy); // & he will execute the action method of Robotomy Request because he has the Grade required  
	bureaucrat2.executeForm(robotomy);  // ! he can not because he doesn't have the required grade to execute
	bureaucrat3.executeForm(robotomy); // ! he can not because he doesn't have the required grade to execute
	std::cout << "\n----------------- ------------------------ -----------------\n" << std::endl;

}