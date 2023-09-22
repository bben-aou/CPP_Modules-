/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:28:23 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/14 15:10:45 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//------- Constructions ---------

Fixed::Fixed(){
    this->fixedPoint = 0;
}

Fixed::Fixed(Fixed const &obj){
    this->fixedPoint = obj.fixedPoint;
}

Fixed::~Fixed(){
    std::cout << BLU "Destructor has been called !" RESET << std::endl;
}

Fixed::Fixed(int const i){
    this->fixedPoint = (i << this->fractionalBits);
}

Fixed::Fixed(float const f){
    this->fixedPoint = (roundf(f * (1 << this->fractionalBits)));
}

// --------- Methods ---------

int     Fixed::toInt( void )    const{
    return (this->fixedPoint >> this->fractionalBits);
}

float   Fixed::toFloat( void )  const{
    return ((float)fixedPoint / (1 << this->fractionalBits));
}

int    Fixed::getRawBits( void )   const{
    std::cout << YEL "getRawBits member function has been called !" RESET << std::endl; 
    return (this->fixedPoint);
}

void    Fixed::setRawBits(int const raw){
    std::cout << YEL "setRawBits member function has been called !" RESET << std::endl;
    this->fixedPoint = raw;
}

// ----- operators ---- 

         /* assignment operator */
Fixed& Fixed::operator = (const Fixed &obj){
        this->fixedPoint = obj.fixedPoint;
    return (*this);
}

        /*insertion operation */
std::ostream& operator << (std::ostream &output, Fixed const &obj){
    output << obj.toFloat();
    return (output);
}
 
    /* prefix increment operator */
Fixed   Fixed::operator ++ (){
    this->fixedPoint++;
    return(*this);
}

    /* postfix increment operator */
Fixed   Fixed::operator ++ (int){
    Fixed tmp = *this;
    this->fixedPoint++;
    return (tmp);
}

    /* prefix decrement operator */
Fixed   Fixed::operator -- (){
    this->fixedPoint--;
    return(*this);
}

     /* postfix decrement operator */
Fixed   Fixed::operator -- (int){
    Fixed tmp = *this;
    this->fixedPoint--;
    return (tmp);
}
    
bool    Fixed::operator == (Fixed const &obj) const{
    return (this->fixedPoint == obj.fixedPoint);
}

bool    Fixed::operator != (Fixed const &obj) const{
    return (this->fixedPoint != obj.fixedPoint);
}

bool    Fixed::operator > (Fixed const &obj)  const{
    return (this->fixedPoint > obj.fixedPoint);
}

bool    Fixed::operator >= (Fixed const &obj) const{
    return (this->fixedPoint >= obj.fixedPoint);
}

bool    Fixed::operator < (Fixed const &obj) const{
    return (this->fixedPoint < obj.fixedPoint);
}

bool    Fixed::operator <= (Fixed const &obj) const{
    return (this->fixedPoint <= obj.fixedPoint);
}

Fixed   Fixed::operator + (Fixed const &obj) const{
    Fixed tmp;
    tmp.fixedPoint = this->fixedPoint + obj.fixedPoint ;
    return (tmp);
}

Fixed   Fixed::operator - (Fixed const &obj) const{
    Fixed   tmp;
    tmp.fixedPoint = this->fixedPoint - obj.fixedPoint ;
    return (tmp);
}

Fixed   Fixed::operator / (Fixed const &obj) const{
    return (Fixed(this->toFloat()/ obj.toFloat()));
}

Fixed			Fixed::operator*(Fixed const &obj) const
{
	if(obj.fixedPoint == 0)
		return (Fixed(0));
	Fixed tmp;
    tmp.fixedPoint = this->fixedPoint * obj.fixedPoint;
    tmp.fixedPoint = tmp.fixedPoint >> this->fractionalBits;
    return (tmp);
}

Fixed			&Fixed::min(Fixed &obj1, Fixed &obj2){
	return ((obj1 < obj2) ? obj1 : obj2);
}

Fixed const		&Fixed::min(Fixed const &obj1, Fixed const &obj2) {
	return ((obj1 < obj2) ? obj1 : obj2);
}

Fixed			&Fixed::max(Fixed &obj1, Fixed &obj2){
	return ((obj1 > obj1) ? obj1 : obj2);
}

Fixed const		&Fixed::max(Fixed const &obj1, Fixed const &obj2) {
	return ((obj1 > obj2) ? obj1 : obj2);
}