/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:53:06 by bben-aou          #+#    #+#             */
/*   Updated: 2023/01/02 14:03:04 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
int main( void )
{
    std::cout << YEL "----------- # Test 1 : Low capacity # -----------" RESET<< std::endl;

    Span span = Span( 5 );

    span.addNumber( 6 );
    span.addNumber( 3 );
    span.addNumber( 9 );
    span.addNumber( 17 );
    span.addNumber( 11 );

    std::cout << MAG "+ Content of span List + :\n" RESET << span << std::endl;

    std::cout << GRN "=> Longest Span: " RESET << span.longestSpan() << std::endl;
    std::cout << GRN "=> shortestSpan: " RESET << span.shortestSpan() << std::endl;

    std::cout << YEL "\n----------- # Test 2 : Large capacity # -----------\n" RESET << std::endl;

    try {
        std::list<int>    l( 10000 );
        std::srand( time ( NULL ) );
        std::generate( l.begin(), l.end(), std::rand );

        Span span( l.size() );

        span.addNumber( l.begin(), l.end() );

        std::cout << GRN "=> Longest span: " RESET<< span.longestSpan() << std::endl;
        std::cout << GRN "=> Shortest span: " RESET << span.shortestSpan() << std::endl;
        
    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl; 
    }

    return 0;
}