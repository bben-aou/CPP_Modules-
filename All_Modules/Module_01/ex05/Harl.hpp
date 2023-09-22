/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:50:46 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/05 10:20:08 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HARL_HPP
# define  HARL_HPP

#include <string>
#include <iostream>

class Harl{
        private :
            void    debug( void )   ;
            void    info( void )    ;
            void    warning( void ) ;
            void    error( void )   ;
        public  :
            Harl( void )  ;
            ~Harl( void ) ;

            void    complain( std::string level ) ;
};
#endif