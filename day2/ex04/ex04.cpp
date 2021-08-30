#include <iostream>
#include <string>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *ptr = &s;
    std::string &ref = *ptr;

    std::cout<< "THIS IS A POINTER"<< std::endl << *ptr << std::endl;
    std::cout<< "THIS IS A REFERENCE"<< std::endl << ref << std::endl;
}