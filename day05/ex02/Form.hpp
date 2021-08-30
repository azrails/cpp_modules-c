#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include <fstream>

#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
private:
    std::string _name;
    bool _sgn;
    int _gs;
    int _ge;
    std::string _target;

public:
    Form(std::string name, int gs, int ge, std::string &target);
    Form(Form const &f);
    Form &operator=(Form const &f);
    ~Form();

    std::string getName() const;
    bool getSign() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    std::string getTarget() const;

    void beSigned(Bureaucrat const &b);
    void execute(Bureaucrat const & executor) const;

    virtual void action() const = 0;

    class GradeTooHighException: public std::exception
    {
        public:
            GradeTooHighException(){}
            virtual ~GradeTooHighException() throw(){}
            virtual const char* what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
        public:
            GradeTooLowException() {}
            virtual ~GradeTooLowException() throw(){}
            virtual const char* what() const throw();
    };
    class NotSignException: public std::exception
    {
        public:
            NotSignException(){}
            virtual ~NotSignException() throw(){}
            virtual const char* what() const throw();
    };
    class LowGradeException: public std::exception
    {
        public:
            LowGradeException(){}
            virtual ~LowGradeException() throw(){}
            virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Form const &f);