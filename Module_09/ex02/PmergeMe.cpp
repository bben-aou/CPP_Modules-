#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
}

PmergeMe::~PmergeMe(){
}

PmergeMe::PmergeMe(const PmergeMe& obj){
    *this = obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &obj){
    // if (this != &obj){
        this->vec = obj.vec;
        this->deq = obj.deq;
        this->vecSortTime = obj.vecSortTime;
        this->deqSortTime = obj.deqSortTime;
    // }
    return *this;
}

void    PmergeMe::addNumber(int value){
    this->vec.push_back(value);
    this->deq.push_back(value);
}

void    PmergeMe::displayVectorContent(bool beforeStatus){
    if (beforeStatus)
        std::cout << "Before: ";
    else
        std::cout << "After: ";
    std::vector<size_t>::iterator   it;

    for (it = vec.begin(); it != vec.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}


void    PmergeMe::insertionSortAlgoVec(int leftMost, int rightMost){
    for (int i = leftMost + 1; i <= rightMost; i++) {
        size_t key = this->vec[i];
        int j = i - 1;
        while (j >= leftMost && this->vec[j] > key) {
            this->vec[j + 1] = this->vec[j];
            j--;
        }
        this->vec[j + 1] = key;
    }
}

void    PmergeMe::insertionSortAlgoDeq(int leftMost, int rightMost){
    for (int i = leftMost + 1; i <= rightMost; i++) {
        size_t key = this->deq[i];
        int j = i - 1;
        while (j >= leftMost && this->deq[j] > key) {
            this->deq[j + 1] = this->deq[j];
            j--;
        }
        this->deq[j + 1] = key;
    }
}


void    PmergeMe::mergeSortAlgoVec(int leftMost, int middle, int rightMost){
    int size1 = middle - leftMost + 1;
    int size2 = rightMost - middle;

    std::vector<int> L(size1), R(size2);

    for (int i = 0; i < size1; i++)
        L[i] = this->vec[leftMost + i];
    for (int j = 0; j < size2; j++)
        R[j] = this->vec[middle + 1 + j];

    int i = 0, j = 0, k = leftMost;
    
    while (i < size1 && j < size2){
        if (L[i] <= R[j]) {
            this->vec[k] = L[i];
            i++;
        }
        else {
            this->vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        this->vec[k] = L[i];
        i++;
        k++;
    }

    while (j < size2) {
        this->vec[k] = R[j];
        j++;
        k++;
    }
}


void    PmergeMe::mergeSortAlgoDeq(int leftMost, int middle, int rightMost){
    int size1 = middle - leftMost + 1;
    int size2 = rightMost - middle;

    std::deque<int> L(size1), R(size2);

    for (int i = 0; i < size1; i++)
        L[i] = this->deq[leftMost + i];
    for (int j = 0; j < size2; j++)
        R[j] = this->deq[middle + 1 + j];

    int i = 0, j = 0, k = leftMost;
    
    while (i < size1 && j < size2){
        if (L[i] <= R[j]) {
            this->deq[k] = L[i];
            i++;
        }
        else {
            this->deq[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        this->deq[k] = L[i];
        i++;
        k++;
    }

    while (j < size2) {
        this->deq[k] = R[j];
        j++;
        k++;
    }
}


void    PmergeMe::mergeInsertionSortVector(int leftMost, int rightMost){
        if (rightMost - leftMost <= this->startInsertionCondition){
            insertionSortAlgoVec(leftMost, rightMost);
        }
        else{
                if (leftMost < rightMost){
                    int     middle  = (leftMost + rightMost) / 2;
                    mergeInsertionSortVector(leftMost, middle);
                    mergeInsertionSortVector(middle + 1, rightMost);
                    mergeSortAlgoVec(leftMost, middle, rightMost);
                }
        }
}

void    PmergeMe::mergeInsertionSortDeque(int leftMost, int rightMost){
        if (rightMost - leftMost <= this->startInsertionCondition){
            insertionSortAlgoDeq(leftMost, rightMost);
        }
        else{
                if (leftMost < rightMost){
                    int     middle  = (leftMost + rightMost) / 2;
                    mergeInsertionSortDeque(leftMost, middle);
                    mergeInsertionSortDeque(middle + 1, rightMost);
                    mergeSortAlgoDeq(leftMost, middle, rightMost);
                }
        }
}


void    PmergeMe::sort(){
    this->startInsertionCondition = 5;

    //-------------- Vector -------------------------
    this->vecSortTimeStart = std::clock();
    mergeInsertionSortVector(0, this->vec.size() - 1);
    this->vecSortTimeEnd  = std::clock();
    this->vecSortTime = static_cast<double>(this->vecSortTimeEnd - this->vecSortTimeStart) / CLOCKS_PER_SEC * 1000000;

    //-------------- Deque -------------------------
    this->deqSortTimeStart = std::clock();
    mergeInsertionSortDeque(0, this->deq.size() - 1);
    this->deqSortTimeEnd  = std::clock();
    this->deqSortTime = static_cast<double>(this->deqSortTimeEnd - this->deqSortTimeStart) / CLOCKS_PER_SEC * 1000000;
}

void  PmergeMe::displaySortTime(){
    std::cout   << "Time to process a range of "
                << vec.size() 
                << " elements with std::vector : "
                << vecSortTime
                << " us" << std::endl;
    std::cout   << "Time to process a range of "
                << deq.size() 
                << " elements with std::deque : "
                << deqSortTime
                << " us" << std::endl;
}