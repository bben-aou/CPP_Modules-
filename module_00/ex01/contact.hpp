/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 07:55:50 by bben-aou          #+#    #+#             */
/*   Updated: 2022/12/05 14:10:43 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact{
            private :
                std::string     firstName    ;
                std::string     lastName    ;
                std::string     nickName    ;
                std::string     phoneNumber ;
                std::string     darkSecret  ;
            public :
                        Contact()     ;
                        ~Contact()    ;
                void    setFirstName(std::string    firstName)   ;
                void    setLastName(std::string     lastName)   ;
                void    setNickName(std::string     nickName)   ;
                void    setPhoneNumber(std::string  phoneNumber);
                void    setDarkSecret(std::string   darkSecret) ;

                std::string     getFirstName(void)  ;
                std::string     getLastName(void)   ;
                std::string     getNickName(void)   ;
                std::string     getPhoneNumber(void);
                std::string     getDarkSecret(void) ;
};
#endif