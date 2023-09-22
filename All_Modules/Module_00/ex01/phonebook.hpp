/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 07:56:01 by bben-aou          #+#    #+#             */
/*   Updated: 2022/11/29 11:55:10 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class   Phonebook{
                private :
                    Contact     contact[8] ;
                    int         index      ;
                    static int  counter    ;
                public :
                    Phonebook(void)      ;
                    ~Phonebook(void)     ;
                    
                    void        setContact(Contact  contact) ;
                    int         getCounter(void)             ;
                    Contact     getContact(int  index)       ;
};

#endif