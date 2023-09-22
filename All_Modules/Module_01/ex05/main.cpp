/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:59:50 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/08 17:26:51 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
    Harl    harl;
    std::cout << "DEBUG     : " << std::endl ;
    harl.complain("DEBUG");
    std::cout << "INFO      : " << std::endl ;
    harl.complain("INFO");
    std::cout << "WARNING   : " << std::endl ;
    harl.complain("WARNING");
    std::cout << "ERROR     : " << std::endl;
    harl.complain("ERROR");
}