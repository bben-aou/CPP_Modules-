/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 07:55:47 by bben-aou          #+#    #+#             */
/*   Updated: 2022/11/29 08:27:51 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


Contact::Contact(){
            
}

Contact::~Contact(){
            
}

void    Contact::setFirstName(std::string       firstName){
    this->firstName = firstName ;
}

void    Contact::setLastName(std::string        lastName){
    this->lastName = lastName ;
}

void    Contact::setNickName(std::string        nickName){
    this->nickName = nickName ;
}

void    Contact::setPhoneNumber(std::string     phoneNumber){
    this->phoneNumber = phoneNumber ;
}

void    Contact::setDarkSecret(std::string      darkSecret){
    this->darkSecret = darkSecret ;
}


std::string     Contact::getFirstName(void){
    return  this->firstName ;
}

std::string     Contact::getLastName(void){
    return  this->lastName ;
}

std::string     Contact::getNickName(void){
    return  this->nickName ;
}

std::string     Contact::getPhoneNumber(void){
    return  this->phoneNumber ;
}

std::string     Contact::getDarkSecret(void){
    return  this->darkSecret ;
}