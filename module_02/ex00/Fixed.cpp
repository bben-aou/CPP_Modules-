/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:35:40 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/14 12:20:43 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << BLU "Default constructor has been called " RESET << std::endl; 
    this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& obj){
    this->fixedPoint = obj.fixedPoint ;
    std::cout << GRN "Copy Constructor has been called !" GRN << std::endl ;
}
Fixed::~Fixed(){
    std::cout << RED "Destructor has been called !" RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj){
    std::cout << BLU "Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        fixedPoint = obj.fixedPoint ;
    return (*this);
}

void    Fixed::setRawBits(int const raw){
    std::cout << YEL "setRawBits member function called" RESET << std::endl;
    this->fixedPoint = raw;
}
int     Fixed::getRawBits(void) const{
    std::cout << YEL "getRawBits member function called" RESET << std::endl;
    return (this->fixedPoint);
}


