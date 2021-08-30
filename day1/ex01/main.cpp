#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook book;
    std::string command;
    while(true)
    {
        std::cout << "Enter the command" << std::endl;
        std::cin >> command;
        if (std::cin.fail())
        {       
            std::cin.clear();
            std::cin.ignore();
            std::cout << "invalid command" << std::endl;
            continue;
        }
        if (command == "EXIT")
        {
            std::cout << "Goodbuy" << std::endl;
            break;
        }
        else if (command == "ADD")
            book.addcontact();
        else if (command == "SEARCH")
            book.searchcontact();
        else
            std::cout << "invalid command" << std::endl;
    }

    return 0;
}