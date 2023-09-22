/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:55:45 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 16:28:12 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << YEL "=------------ MutantStack d(&_*)b------------= \n" RESET << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << GRN  "=> The top of the mstack is :" RESET << std::endl;
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << RED "! Element of mstack is poped ! " RESET << std::endl;
    std::cout << GRN "=> The size of mstack is : " RESET << std::endl;
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << YEL "=> # More elements pushed into the stack # \n\n" RESET<< std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        std::cout << CYN << *it  << RESET << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);

    /* -------------------------------------------------------------------- */

    std::cout << std::endl;
    std::cout << YEL "=------------ List d(*_&)b------------= \n" RESET << std::endl;

    std::list< int > lst;

    lst.push_back(5);
    lst.push_back(17);
    std::cout << MAG "=> The back of the list is :" RESET << std::endl;
    std::cout << lst.back() << std::endl;

    lst.pop_back();
    std::cout << RED  "! Element of list is poped ! " RESET << std::endl;
     std::cout << GRN "=> The size of list is : " RED  << std::endl;
    std::cout << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::cout << YEL "=> # More elements pushed into the stack # \n\n" RESET << std::endl;
    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();
    ++it;
    --it;
    while (lst_it != lst_ite)
    {
        std::cout << CYN << *lst_it << RESET << std::endl;
        ++lst_it;
    }
    // std::list<int> l(lst);

    return 0;
}