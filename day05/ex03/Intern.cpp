#include "Intern.hpp"

typedef Form* (Intern::*func)(std::string const &target);

Intern::Intern(){

}

Intern::Intern(Intern const &i){
    *this = i;
}

Intern &Intern::operator=(Intern const &i){
    if (this != &i)
    {

    }
    return *this;
}

Intern::~Intern(){

}

Form* Intern::makeForm(std::string const &name, std::string const &target){

    std::string names[3] = {"presidential pardon", "robotomy request", 
                            "shrubbery creation"};
    func funcs[3] = {&Intern::_makePardon, &Intern::_makeRobotise, &Intern::_makeShrubbery};
    for (int i = 0; i< 3; i++)
    {
        if (name == names[i])
        {
            std::cout << "Intern creates " << names[i] << std::endl;
            return (this->*funcs[i])(target);
        }
    }
    std::cout << "Error: no this type forms!" << std::endl;
    return NULL;
}

Form* Intern::_makePardon(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

Form* Intern::_makeRobotise(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

Form* Intern::_makeShrubbery(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}