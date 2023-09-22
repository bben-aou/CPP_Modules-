/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:04:25 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/14 15:10:28 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FIXED_H
# define    FIXED_H

#include <iostream>
#include <cmath>

#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"


class Fixed{
        private :
            int                 fixedPoint;
            static const int    fractionalBits = 8;
        public  :
            Fixed()              ;
            Fixed(const Fixed&)  ;
            Fixed(const int i)   ;
            Fixed(const float f) ;
            ~Fixed();

            int     getRawBits( void ) const   ;
            void    setRawBits( int const raw) ;
            int     toInt( void )   const      ;
            float   toFloat( void ) const      ;
            
            Fixed&  operator = (const Fixed& obj)     ;
            Fixed   operator ++ ()                    ;
            Fixed   operator -- ()                    ;
            Fixed   operator ++ (int)                 ;
            Fixed   operator -- (int)                 ;
            Fixed   operator + (Fixed const &)  const ;
            Fixed   operator - (Fixed const &)  const ;
            Fixed   operator * (Fixed const &)  const ;
            Fixed   operator / (Fixed const &)  const ;
            bool    operator == (Fixed const &) const ;
            bool    operator != (Fixed const &) const ;
            bool    operator >  (Fixed const &) const ;
            bool    operator >= (Fixed const &) const ;
            bool    operator <  (Fixed const &) const ;
            bool    operator <= (Fixed const &) const ; 

            static  Fixed&      min(Fixed &, Fixed &)                   ;
            static const  Fixed&      min(Fixed const &, Fixed const &)  ;
            static  Fixed&      max(Fixed &, Fixed &)                   ;
            static  const Fixed&      max(Fixed const &, Fixed const &)  ;  
};

std::ostream& operator << (std::ostream &output, Fixed const &obj);

#endif