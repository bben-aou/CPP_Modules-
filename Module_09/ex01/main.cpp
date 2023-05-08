#include "RPN.hpp"

int main(int argc , char *argv[]){
    if (argc != 2)
        std::cerr << "Error : Not enough arguments !" << std::endl;
    try{
        RPN rpn1(argv[1]);
        std::cout << "Final Result : " << rpn1.result() << std::endl;
    }
    catch(std::exception &e){
        std::cerr << "Error : " << e.what() << std::endl;
    }
}