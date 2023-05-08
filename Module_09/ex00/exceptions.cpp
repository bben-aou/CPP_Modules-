// #include <iostream>


// class exceptionDataFileExistence : public std::exception{
//     public :
//         const char* what() const throw(){
//             return "data.csv file doesn't exist !";
//         }
// };

// class exceptionInputFileExistence : public std::exception{
//     public :
//         const char* what() const throw(){
//             return ("Ops Check if the file exist !");
//         }
// };

// class exceptionEmptyInputFile : public std::exception{
//     public :
//         const char* what() const throw(){
//             return ("Ops empty input file");
//         }
// };

// class exceptionDataFormat : public std::exception{
//     public :
//         const char* what() const throw(){
//             return ("bad syntax of data file !!");
//         }
// };

// class exceptionDateFormat : public std::exception{
//     public :
//         const char* what() const throw(){
//             return ("invalid date format (Year-Month-Day)");
//         }
// };

// class exceptionInputFormat : public std::exception{

//     public :
//         const char* what() const throw(){
//             return ("Date format should be (date | value)");
//         }
// }

// class exceptionNegativeValue : public std::exception{
//     public :
//         const char* what() const throw(){
//             return ("Ops valid value must be positive integer !");
//         }
// };

// class exceptionToHighValue : public std::exception{
//     public :
//         const char* what() const throw(){
//             return ("Ops valid value must be <= 1000 !");
//         }
// };

// class exceptionValueValidFormat : public std::exception{
//     public :
//         const  char* what() const throw(){
//             return ("invalid value format !");
//         }
// }