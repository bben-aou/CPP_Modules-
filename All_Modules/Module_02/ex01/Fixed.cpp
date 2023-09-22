/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:08:14 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/14 14:16:49 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << CYN "Default Constructor has been called !" RESET << std::endl;
    this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& obj){
    std::cout << CYN "Copy Constructor has been called !"  RESET << std::endl;
    this->fixedPoint = obj.fixedPoint;
}
Fixed::~Fixed(){
    std::cout << RED "Destructor has been called !" RESET << std::endl;
}

void    Fixed::setRawBits(int const raw){
    std::cout << YEL "setRawBits member function has been called !" RESET << std::endl;
    this->fixedPoint = raw;
}

int    Fixed::getRawBits(void)  const{
    std::cout << YEL "getRawBits member function has been called !" RESET << std::endl;
    return (this->fixedPoint);
}

Fixed& Fixed::operator = (const Fixed& obj){
    std::cout << BLU  "Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        fixedPoint = obj.fixedPoint ;
    return (*this);
}

Fixed::Fixed(int const i){
    std::cout << MAG "Int Constructor has been called !" RESET << std::endl;
    this->fixedPoint = (i << this->fractionalBits);
}

int     Fixed::toInt( void )    const{
    return ((int)this->fixedPoint >> fractionalBits);
}

Fixed::Fixed(float const f){
    std::cout << MAG "Float Constructor has been called !" RESET << std::endl;
    this->fixedPoint = (roundf(f * (1 << fractionalBits)));
}

float   Fixed::toFloat( void )      const{
    return ((float)this->fixedPoint / (1 << fractionalBits)); 
}

std::ostream& operator << (std::ostream &output , const Fixed & obj){
    output << obj.toFloat();
    return (output);
}

