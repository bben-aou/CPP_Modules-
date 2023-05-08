#include "PmergeMe.hpp"

int main(int argc, char* argv[]){
    if (argc < 2){
        std::cerr << "Error : bad arguments !" << std::endl;
        return (1);
    }
    PmergeMe    pmg;
    int         number;
    int         i = 1;

    while (i < argc){
        std::istringstream  extractedNum(argv[i]);
        if (extractedNum >> number){
            if (number <= 0){
                std::cerr << "Error : argument " << number << " should be a positive integer !" << std::endl;
                return (1);
            }
            pmg.addNumber(number);
        }
        else{
            std::cerr << "Error : argument " << argv[i] << " should be integer !" << std::endl;
            return (1);
        }
        i++;
    }
    pmg.displayVectorContent(true);
    pmg.sort();
    pmg.displayVectorContent(false);
    pmg.displaySortTime();
}