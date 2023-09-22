/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:47:24 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/26 18:47:39 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    private :
        RobotomyRequestForm();
    public  :
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm( );
        
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator = (const RobotomyRequestForm& obj);

        void    action(const Bureaucrat& obj) const;
};