/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 00:57:06 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/26 16:13:07 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
    private :
        ShrubberyCreationForm( );
    public  :
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm( );
        
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm& obj);

        void    action(const Bureaucrat& obj) const;
};