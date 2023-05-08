#ifndef     PMERGEME_HPP
# define    PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>
#include <sstream>
#include <cctype>

class PmergeMe{
    private :
        std::vector<size_t>     vec;
        std::deque<size_t>      deq;
        double                  vecSortTime;
        double                  deqSortTime;

        int                     startInsertionCondition;

        std::clock_t  vecSortTimeStart;
        std::clock_t  vecSortTimeEnd;

        std::clock_t  deqSortTimeStart;
        std::clock_t  deqSortTimeEnd;
    public :
        PmergeMe();
        ~PmergeMe();

        PmergeMe(const PmergeMe& obj);
        PmergeMe &operator = (const PmergeMe& obj);

    // methods 

    void    addNumber(int number);
    void    displayVectorContent(bool beforeOrAfterStatus);
    void    displaySortTime();
    void    sort();
    void    mergeInsertionSortVector(int leftMost, int rightMost);
    void    mergeSortAlgoVec(int leftMost, int middle, int rightMost);
    void    insertionSortAlgoVec(int leftMost, int rightMost);

    void    mergeInsertionSortDeque(int leftMost, int rightMost);
    void    mergeSortAlgoDeq(int leftMost, int middle, int rightMost);
    void    insertionSortAlgoDeq(int leftMost, int rightMost);


};

#endif