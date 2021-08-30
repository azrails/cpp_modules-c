#pragma once
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    Form* _makePardon(std::string const &target);
    Form* _makeRobotise(std::string const &target);
    Form* _makeShrubbery(std::string const &target);

public:
    Intern();
    Intern(Intern const &i);
    Intern &operator=(Intern const &i);
    ~Intern();

    Form* makeForm(std::string const &name, std::string const &target);
};
