/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:08:08 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/14 12:59:40 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FIXED_H
#define    FIXED_H

#include <iostream>
#include <cmath>

# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define RESET "\033[0m"

class Fixed{
        private :
            int                fixedPoint;
            static const int   fractionalBits = 8;
        public  :
            Fixed();
            Fixed(const int i)   ;
            Fixed(const float f) ;
            Fixed(const Fixed&)  ;
            ~Fixed()             ;
            
            int     getRawBits(void)   const  ;
            void    setRawBits(int const raw) ;
            float   toFloat(void)   const  ;
            int     toInt(void)     const  ;
            Fixed& operator=(const Fixed& obj)   ;
};

std::ostream& operator << (std::ostream &output, const Fixed &obj);

#endif