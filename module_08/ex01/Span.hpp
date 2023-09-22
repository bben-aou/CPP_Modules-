/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:46:33 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 13:57:20 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>
#include <exception>

#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

class Span
{
private:
    std::list<int>  _list;
    unsigned int    _n;

    Span( void );

public:
    Span( unsigned int );
    Span( const Span& );
    ~Span( void );

    Span&               operator=( const Span& );
    void                addNumber( int );
    void                addNumber( std::list<int>::const_iterator, std::list<int>::const_iterator );
    unsigned int        longestSpan( void ) const;
    unsigned int        shortestSpan( void ) const;

    const std::list< int >*   getList( void ) const;
};

std::ostream& operator<<( std::ostream&, const Span& );