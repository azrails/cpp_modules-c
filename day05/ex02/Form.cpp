#include "Form.hpp"

Form::Form(std::string name, int gs, int ge , std::string &target): _name(name), _sgn(false), 
                                           _gs(gs), _ge(ge), _target(target){
    if (gs > 150 || ge > 150)
        throw Form::GradeTooLowException();
    if (gs < 1 || gs < 1)
        throw Form::GradeTooHighException();
}

Form::Form(Form const &f){
    *this = f;
}

Form &Form::operator=(Form const &f){
    if (this != &f)
    {
        this->_name = f.getName();
        this->_sgn = f.getSign();
        this->_ge = f.getGradeToExecute();
        this->_gs = f.getGradeToSign();
    }
    return *this;
}

Form::~Form(){

}

std::string Form::getName() const{
    return this->_name;
}

bool Form::getSign() const{
    return this->_sgn;
}

int Form::getGradeToSign() const{
    return this->_gs;
}

int Form::getGradeToExecute() const{
    return this->_ge;
}

void Form::beSigned(Bureaucrat const &b){
    if (b.getGrade() <= this->getGradeToSign())
        this->_sgn = true;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade more than 1";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade less than 150";
}

const char* Form::NotSignException::what() const throw()
{
    return "Form not signed yet.";
}

std::ostream &operator<<(std::ostream &o, Form const &f){
    o << "Form " << f.getName() << " grade to sign:" << f.getGradeToSign() << 
        " grade to execute:" << f.getGradeToExecute() << " signed:" << 
        f.getSign() << std::endl;
    return o;
}

const char* Form::LowGradeException::what() const throw()
{
    return "Bureaucrat has low grade for execute!";
}

std::string Form::getTarget() const
{
    return this->_target;
}

void Form::execute(Bureaucrat const & executor) const
{
    if (!this->_sgn)
        throw Form::NotSignException();
    else if (executor.getGrade() > this->_ge)
        throw Form::LowGradeException();
    this->action();
}