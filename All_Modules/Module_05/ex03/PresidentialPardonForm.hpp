/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:18:18 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/26 18:47:27 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private :
        PresidentialPardonForm();
    public  :
        PresidentialPardonForm(const std::string& _target);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm( );

        PresidentialPardonForm& operator = (const PresidentialPardonForm& obj);

        void    action(const Bureaucrat& obj) const;
};