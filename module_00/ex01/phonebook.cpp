/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 07:55:56 by bben-aou          #+#    #+#             */
/*   Updated: 2022/12/05 13:49:36 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : index(0){
   
}

Phonebook::~Phonebook(){

}

int         Phonebook::counter = 0;

void        Phonebook::setContact(Contact contact){
    this->contact[this->index] = contact ;
    if (counter < 8)
        counter = counter + 1 ;
    else
        counter +=  0 ;
    this->index = (this->index + 1) % 8 ;
}

int         Phonebook::getCounter( void ){
    return  this->counter ;
}

Contact     Phonebook::getContact(int index){
    return  this->contact[index] ;
}