#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade){
    if (this->_grade > 150)
        throw GradeTooLowException();
    else if (this->_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &b){
    *this = b;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b){
    if (this != &b)
    {
        this->_name = b.getName();
        this->_grade = b.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){

}

void Bureaucrat::incGrade(){
    if (this->_grade == 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decGrade(){
    if (this->_grade == 150)
        throw GradeTooLowException();
    this->_grade++;
}

std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade more than 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade less than 150";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b)
{
    o << b.getName() << ",  bureaucrat grade " << b.getGrade() << std::endl;
    return o;
}