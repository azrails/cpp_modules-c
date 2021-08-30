#pragma once
#include <string>
#include <iostream>

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

public:
    Form(std::string name = "Const", int gs = 50, int ge = 10);
    Form(Form const &f);
    Form &operator=(Form const &f);
    ~Form();

    std::string getName() const;
    bool getSign() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat const &b);

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
};

std::ostream &operator<<(std::ostream &o, Form const &f);