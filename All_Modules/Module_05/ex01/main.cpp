/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:05:56 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:18:17 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	
	std::cout << std::endl << "-------------- test # 1 # :---------------------" << std::endl << std::endl;
		Bureaucrat bureaucrat("bureaucrat", 5);        // ? Create a bureaucrat ?
	try
	{
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		bureaucrat.incrementGrade();                   // * grade was 5 now it will become 3 because we increment it twice *
		std::cout << bureaucrat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;     // ! exception message (Grade too high or Grade too low) 
	}
	
	std::cout << std::endl <<  "---------------- test # 2 # :--------------------" << std::endl << std::endl;

	try
	{
		Form test("test", 151, 42);  // ? Create a Form with Grade Sign required and Execute Sign required ?
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot initialize test because " << e.what() << std::endl; // ! exception message if grade sign or grade Execution out of range ~
	}

	std::cout << std::endl << "---------------- test # 3 # :--------------------" << std::endl << std::endl;
	
	// ? Create 3 Forms with different constructors ?
	Form a("a");
	Form b("b", 3, 3);   // * Form named b and require Grade 3 to sign and Grade 3 to Execute *
	Form c("c", 3, 20);  // * Form named b and require Grade 3 to sign and Grade 20 to Execute *
	// ^ Print Form's informations and information of Bureaucrat  
	std::cout << bureaucrat << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	// ^ tests of Signing the forms ? 
	bureaucrat.signForm(a);   // * this form requires Grade 1 for sign and execute it but bureaucrat has grade 3 * not allowed
	bureaucrat.signForm(b);   // * this form requires Grade 3 for sign and execute it but bureaucrat has grade 3 *  allowed
	bureaucrat.signForm(b);   // * this form is already signed                                                   * not allowed
	
	std::cout << std::endl << "---------------- test # 4 # :--------------------" << std::endl << std::endl;

	try
	{
		bureaucrat.decrementGrade(); // ^ Bureaucrat has garde 3 by decrement the grade it will be 4 ^
		std::cout << bureaucrat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl; // ! exception message if the grade increment or decrement out of range 
	}

	std::cout << std::endl << "---------------- test # 5 # :--------------------" << std::endl << std::endl;

	
	bureaucrat.signForm(c); // * try to sign form C that requires grade 3 to sign and 20 to execute after decrement grade of bureaucrat to 4 : not allowed
	// ^ print Form's information  
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}