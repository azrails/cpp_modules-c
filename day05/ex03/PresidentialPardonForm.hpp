#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &s);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &s);
        ~PresidentialPardonForm();

        virtual void action() const;
};