/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 07:55:53 by bben-aou          #+#    #+#             */
/*   Updated: 2022/12/05 14:17:32 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>
#include <cstring>
#include <limits>

std::string     truncate_string(std::string str){
    std::string     truncatedStr;
    if (str.size() >= 10)
        return (str.substr(0,9) + "." );
    return (str);
    
}

void            clearAndIgnore(void){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


void            addContact(Phonebook    *phonebook){
    Contact         contact ;
    std::string     data    ;

    std::cout << "\033[0;33m Enter Your First Name   \033[0;m: " ;
    std::getline(std::cin, data)              ;
    contact.setFirstName(data)                ;
    std::cout << "\033[0;33m Enter Your Last Name    \033[0;m: " ;
    std::getline(std::cin , data)             ;
    contact.setLastName(data)                 ;
    std::cout << "\033[0;33m Enter Your Nick Name    \033[0;m: " ;
    std::getline(std::cin, data)              ;
    contact.setNickName(data)                 ;
    std::cout << "\033[0;33m Enter Your Phone Number \033[0;m: " ;
    std::getline(std::cin, data)              ;
    contact.setPhoneNumber(data)              ;
    std::cout << "\033[0;33m Enter Your Dark Secret  \033[0;m: " ;
    std::getline(std::cin, data)              ;
    contact.setDarkSecret(data)               ;
    phonebook->setContact(contact)            ;
}


void    searchContact(Phonebook     *phonebook){
    int     counter;
    int     index;

    counter = phonebook->getCounter();
    std::cout << "\033[1;36m+----------+----------+----------+----------+\033[1;m" << std::endl          ;
	std::cout << "\033[1;36m│\033[1;m" << std::setw(10) << std::right << "Index"                          ;
	std::cout << "\033[1;36m│\033[1;m" << std::setw(10) << std::right << "First Name"                    ;
	std::cout << "\033[1;36m│\033[1;m" << std::setw(10) << std::right << "Last Name"                     ;
	std::cout << "\033[1;36m│\033[1;m" << std::setw(10) << std::right << "Nick Name" << "\033[1;36m│\033[1;m" << std::endl ; 
	std::cout << "\033[1;36m+----------+----------+----------+----------+\033[1;m" << std::endl          ;
    for(int i = 0 ; i < phonebook->getCounter(); i++){
        Contact contact;
        contact = phonebook->getContact(i)        ;
        std::cout << "\033[1;36m|\033[1;m" << std::setw(10) << i + 1;
        std::cout << "\033[1;36m|\033[1;m" << std::setw(10) << truncate_string(contact.getFirstName());
        std::cout << "\033[1;36m|\033[1;m" << std::setw(10) << truncate_string(contact.getLastName()) ;
        std::cout << "\033[1;36m|\033[1;m" << std::setw(10) << truncate_string(contact.getNickName()) ;
        std::cout << "\033[1;36m|\033[1;m" << std::endl;
    }
    std::cout <<  "\033[1;36m+----------+----------+----------+----------+\033[1;m" << std::endl ;
    if (counter > 0){
        std::cout << "\033[1;34m Please Chose The Index Of The Contact That You Wanna See All His Informations : \033[1;m" << std::endl ;
        while (!(std::cin >> index) || index < 1 || index > counter){
            std::cout << "\033[35m Invalid Input !! Please Enter A Valid Index : \033[0;m" ;
            clearAndIgnore();
        }
        index = index - 1;
        Contact     currentContact;
        currentContact = phonebook->getContact(index);
        std::cout << std::endl << "\033[36m--------------------- Informations Of Contact : + " << index + 1 << " + : ---------------------\033[0;m" << std::endl;
        std::cout << "\033[1;33m ✤ First Name   : \033[1;m" << currentContact.getFirstName() << std::endl   ;
        std::cout << "\033[1;33m ✤ Last Name    : \033[1;m" << currentContact.getLastName() << std::endl    ;
        std::cout << "\033[1;33m ✤ Nick Name    : \033[1;m" << currentContact.getNickName() << std::endl    ;
        std::cout << "\033[1;33m ✤ Phone Number : \033[1;m" << currentContact.getPhoneNumber() << std::endl ;
        std::cout << "\033[1;33m ✤ Dark Secret  : \033[1;m" << currentContact.getDarkSecret() << std::endl  ;
    }
    else
        std::cout << "\033[32m Phonebook Is Empty ! Please press any key to get back to the Menu : \033[0;m" << std::endl;
    clearAndIgnore();
}


int main(void){
        Phonebook       phonebook;
        std::string     cmd;
    
    std::cout << " \033[0;36m_____   _                          _                    _\n"     ;    
    std::cout << "|  __ \\ | |                        | |                  | |\n"    ;   
    std::cout << "| |__) || |__    ___   _ __    ___ | |__    ___    ___  | | __\n" ;
    std::cout << "|  ___/ | '_ \\  / _ \\ | '_ \\  / _ \\| '_ \\  / _ \\  / _ \\ | |/ /\n" ;
    std::cout << "| |     | | | || (_) || | | ||  __/| |_) || (_) || (_) ||   < \n" ;
    std::cout << "|_|     |_| |_| \\___/ |_| |_| \\___||_.__/  \\___/  \\___/ |_|\\_\\ \033[0;m\n" ;

    std::cout << std::endl << std::endl;
    std::cout << "📍 Manual Of Use : 📍" << std::endl << std::endl;
    std::cout << "             - ✅ \033[1;32m ADD \033[1;m    : save a new contact         -" << std::endl;
    std::cout << "             - 🔍 \033[1;32m SEARCH \033[1;m : display a specific contact -" << std::endl;
    std::cout << "             - ⛔️ \033[1;32m EXIT \033[1;m   : Exit the program           -" << std::endl << std::endl;

    while (1){
        std::cout << "🔰\033[34m Please chose a command : \033[0;m🔰 " << std::endl <<  std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            return (0);
        if (cmd == "ADD")
            addContact(&phonebook);
        else if ( cmd == "SEARCH"){
            searchContact(&phonebook);
        }
        else if (cmd == "EXIT"){
            system("clear");
            std::cout << "Good Bye 😁" << std::endl;
            return (0);
        }
        else{
            std::cout << "\033[0;31m Wrong Command !!\033[0;m" << std::endl;
            break;
        }
    }
}
 