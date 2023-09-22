/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:55:50 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 16:25:04 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once


#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>


#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"


template < typename T, class Container = std::deque < T > > 
class MutantStack : public std::stack< T, Container > {
private:

public:

    MutantStack( void ) {};
    ~MutantStack( void ) {};

    MutantStack( const MutantStack& rhs ) { *this = rhs; }
    MutantStack&    operator=( const MutantStack& rhs ) {
        std::stack< T, Container >::operator = ( rhs );
        return *this;
    }

    typedef typename Container::iterator    iterator;

    iterator    begin() { return this->c.begin(); }
    iterator    end() { return this->c.end(); }
};
