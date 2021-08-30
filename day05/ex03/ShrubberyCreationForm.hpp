#pragma once
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &s);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &s);
        ~ShrubberyCreationForm();

        virtual void action() const;
};
