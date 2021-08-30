#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45, target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &s): Form(s)
{
    *this = s;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &s)
{
    if (this != &s)
    {
        Form::operator=(s);
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::action() const
{
    std::cout << "Wrrrrr Wrrroar ... dirdirdir..." << std::endl;
    if (rand() % 2 == 0)
    {
        std::cout << this->getTarget() << "has been robotomized successfully!" << std::endl;
    }
    else
        std::cout << "Robotomize has fallen!" << std::endl;
}