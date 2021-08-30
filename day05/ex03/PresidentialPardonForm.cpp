#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &s): Form(s)
{
    *this = s;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &s)
{
    if (this != &s)
    {
        Form::operator=(s);
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}