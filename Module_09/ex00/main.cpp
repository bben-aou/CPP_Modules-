#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    if(argc != 2)
        std::cerr << "Error : bad arguments !"  << std::endl;
    try{
        BitcoinExchange  bitcoin(argv[1]);
    }
    catch (std::exception& e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    return 0;
}