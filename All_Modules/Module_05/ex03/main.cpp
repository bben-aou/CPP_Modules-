/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:29:59 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 10:08:09 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{

    std::cout << YEL "----------------- # Creation Bureaucrats #-----------------\n" RESET << std::endl;
	
		Bureaucrat bureaucrat1("bureaucrat1", 5);
		Bureaucrat bureaucrat2("bureaucrat2", 45);
		Bureaucrat bureaucrat3("bureaucrat3", 137);
	

    std::cout << YEL "\n----------------- # print Bureaucrat's Informations # -----------------\n" RESET << std::endl;

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;

 	std::cout << YEL "\n----------------- # Creation Forms and Intern  #-----------------\n" RESET << std::endl;
	
		Intern intern;
		
		AForm* formA;
		AForm* formB;
		AForm* formC;
		AForm* formD;
	
	std::cout << BLU "\n----------------- # Test # 0 : Intern  #-----------------\n" RESET << std::endl;
	
	try{
		formA = intern.makeForm("shrubbery creation", "home");
		formB = intern.makeForm("robotomy request", "Bender");
		formC = intern.makeForm("presidential pardon", "Stephen Bannon");
		formD = intern.makeForm("internTest", "internTest");
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

 	std::cout << BLU "\n----------------- + Test  # 1 : Shrubbery # + -----------------\n" RESET<< std::endl;
	
 	std::cout << YEL "Execute shrubbery form (failure): \n"  RESET << std::endl;
	
	// * the shrubbery form will not be executed because it's not signed yet *
	bureaucrat1.executeForm(*formA);
	bureaucrat2.executeForm(*formA);
	bureaucrat3.executeForm(*formA);
	// std::cout << std::endl;
 	std::cout << YEL "\n Sign formA form : \n"  RESET << std::endl;

	bureaucrat1.signForm(*formA);   // * it will be signed by the bureaucrat because he has the grade to sign it *
	bureaucrat2.signForm(*formA);   //  ! signing will fail because it's already signed *
	bureaucrat3.signForm(*formA); //   ! signing will fail for the same reason *
	// std::cout << std::endl;
 	std::cout << YEL "\n Execute formA form (success) : \n"  RESET << std::endl;
	// * the formA form will execute this time because it's signed *
	bureaucrat1.executeForm(*formA); // & the file target_formA will be created 
	bureaucrat2.executeForm(*formA);
	bureaucrat3.executeForm(*formA);
	std::cout << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
 	std::cout << BLU "\n----------------- + Test  # 2 : Presidential Pardon # + -----------------\n" RESET << std::endl;

	// std::cout << std::endl;
	std::cout << YEL  "Execute Presidential Pardon form (failure): \n" RESET << std::endl;
	// * the Presidential Pardon form will not be executed because it's not signed yet *
	bureaucrat1.executeForm(*formB);
	bureaucrat2.executeForm(*formB);
	bureaucrat3.executeForm(*formB);
	// std::cout << std::endl;
	
	std::cout << YEL  "\n Sign Presidential formB form : \n" RESET << std::endl;
	
	bureaucrat1.signForm(*formB);   // * it will be signed by the bureaucrat because he has the grade to sign it *
	bureaucrat2.signForm(*formB);   //  ! signing will fail because it's already signed *
	bureaucrat3.signForm(*formB); //   ! signing will fail for the same reason *
	std::cout << std::endl;
	std::cout << YEL  "Execute Presidential formB form (success): \n" RESET << std::endl;
	// * the Presidential formB form will execute this time because it's signed  *
	bureaucrat1.executeForm(*formB); // & he will execute the action method of presidential formB because he has the Grade required  
	bureaucrat2.executeForm(*formB); // ! he can not because he doesn't have the required grade to execute
	bureaucrat3.executeForm(*formB);// ! he can not because he doesn't have the required grade to execute
	std::cout << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
 	std::cout << BLU "\n----------------- + Test  # 3 :  Robotomy Request # + -----------------\n" RESET<< std::endl;

	// std::cout << std::endl;
	std::cout << YEL  "Execute Robotomy Request form (failure): \n" RESET<< std::endl;
	
	// * the Robotomy Request form will not be executed because it's not signed yet *
	bureaucrat1.executeForm(*formC);
	bureaucrat2.executeForm(*formC);
	bureaucrat3.executeForm(*formC);
	// std::cout << std::endl;
	std::cout << YEL  "\n Sign formC Request form : \n" RESET << std::endl;
	
	bureaucrat1.signForm(*formC); // * it will be signed by the bureaucrat because he has the grade to sign it *
	bureaucrat2.signForm(*formC); // ! he can not because he doesn't have the required grade to execute
	bureaucrat3.signForm(*formC);// ! he can not because he doesn't have the required grade to execute
	std::cout << std::endl;
	// std::cout << std::endl;
	
	std::cout << YEL  "Execute formC Request form (success): \n" RESET << std::endl;
	
	bureaucrat1.executeForm(*formC); // & he will execute the action method of formC Request because he has the Grade required  
	bureaucrat2.executeForm(*formC);  // ! he can not because he doesn't have the required grade to execute
	bureaucrat3.executeForm(*formC); // ! he can not because he doesn't have the required grade to execute
	std::cout << BLU "\n----------------- ------------------------ -----------------\n" RESET<< std::endl;
}