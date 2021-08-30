#pragma once
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &s);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &s);
        ~RobotomyRequestForm();

        virtual void action() const;
};

